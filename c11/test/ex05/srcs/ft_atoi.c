/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:25:25 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 09:25:37 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	nb = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str <= 57 && *str >= 48)
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (sign * nb);
}
