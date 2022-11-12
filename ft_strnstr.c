/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:33:49 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/12 17:11:09 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*ptr_h;
	const char	*ptr_n;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		ptr_h = haystack;
		ptr_n = needle;
		while (*ptr_h && *ptr_n != 0)
		{
			if (*ptr_h != *ptr_n)
				break ;
			ptr_h++;
			ptr_n++;
		}
		if (!(*ptr_n))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
