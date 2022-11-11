/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:09:35 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/11 15:08:41 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = s;
	while (*p != '\0')
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (c == 0)
		return (p);
	else
		return (0);
}
