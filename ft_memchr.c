/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:13:57 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/10 22:12:13 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
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