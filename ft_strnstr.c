/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:33:49 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/11 20:42:11 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr_h;
	char	*ptr_n;
	size_t	hay_len;
	size_t	nee_len;

	if (!(*needle))
		return (haystack);
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
			return (haystack);
		haystack++;
	}
	return (NULL);
}
