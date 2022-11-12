/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:05:39 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/12 15:48:52 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*ret;
	size_t	len;
	size_t	idx;

	p = (char *)s;
	len = ft_strlen(s);
	idx = -1;
	ret = 0;
	while (++idx < len + 1)
	{
		if (p[idx] == (char)c)
			ret = p;
	}
	return (ret);
}
