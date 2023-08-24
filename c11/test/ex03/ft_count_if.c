/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:37:40 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:04:01 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int	lower(char *c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (c[i])
	{
		if (!(c[i] >= 97 && c[i] <= 126))
			result = 1;
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[3] = {"Ok", "Pq", "pt"};
	printf("%d", ft_count_if(tab,3,&lower));
}
 */
