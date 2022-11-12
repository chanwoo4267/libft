/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:58:47 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/12 17:10:41 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n <= 0)
		return (0);
	while (*s1 && *s2 && n > 1)
	{
		if (*s1 != *s2)
			return ((int)(*s1 - *s2));
		s1++;
		s2++;
		n--;
	}
	return ((int)(*s1 - *s2));
}
