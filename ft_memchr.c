/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:13:57 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/12 17:10:53 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			idx;

	str = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		if (str[idx] == (unsigned char)c)
			return ((void *)(str + idx));
		idx++;
	}
	return (0);
}
