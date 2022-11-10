/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:36:56 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/10 11:36:07 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long		result;
	long long		checker;
	int				sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		checker = result * 10 + (*str - '0');
		if ((checker - (*str - '0')) / 10 == result)
			result = checker;
		else
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
		str++;
	}
	return (result * sign);
}