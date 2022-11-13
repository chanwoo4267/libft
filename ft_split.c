/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:29:01 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/14 00:09:11 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_split_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**free_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free (strs[i]);
		strs[i] = NULL;
		i++;
	}
	free (strs);
	strs = NULL;
	return (strs);
}

size_t	get_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	char	**strs;

	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_get_split_count(s, c) + 1));
	if (!strs)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			strs[index++] = ft_substr(s, 0, get_len(s, c));
			if (!strs[index - 1])
				return (free_strs(strs));
			s += get_len(s, c);
		}
	}
	strs[index] = 0;
	return (strs);
}
