/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:27:13 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/11 21:55:29 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m_str;
	char	*ret_ptr;
	size_t	s_len;
	size_t	m_len;

	s_len = ft_strlen(s);
	if (start + len > s_len)
		m_len = s_len - start;
	else
		m_len = len;
	m_str = malloc(sizeof(char) * (m_len + 1));
	if (!m_str)
		return (NULL);
	ret_ptr = m_str;
	s += start;
	while (m_len > 0)
	{
		*m_str = *s;
		m_str++;
		s++;
		m_len--;
	}
	*m_str = '\0';
	return (ret_ptr);
}
