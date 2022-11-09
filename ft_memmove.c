/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:34:19 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/09 17:58:05 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
incompleted
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst + len > src)
	{
		
	}
	else
	{
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	}
}