/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:42:11 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/12 15:45:47 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char	*ptr_str;
	char	*ptr_cpy;
	size_t	len;

	len = ft_strlen(s1);
	if (n < len)
		len = n;
	ptr_str = NULL;
	ptr_str = malloc(sizeof(char) * (len + 1));
	if (ptr_str == NULL)
		return (NULL);
	ptr_cpy = ptr_str;
	while (*s1)
	{
		*ptr_cpy = *s1;
		ptr_cpy++;
		s1++;
	}
	*ptr_cpy = '\0';
	return (ptr_str);
}
