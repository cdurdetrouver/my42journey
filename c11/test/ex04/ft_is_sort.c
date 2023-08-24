/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:43:22 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:05:04 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;

	i = 0;
	sens = -1;
	while (f(tab[i], tab[i + 1]) == 0 && i < length - 1)
		i++;
	if (f(tab[i], tab[i + 1]) > 0)
		sens = 1;
	while (i < length - 1)
	{
		if (sens == 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
		}
		else
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
		}
		i++;
	}
	return (1);
}

/*
int	tri(int v1, int v2)
{
	if (v1 == v2)
		return (0);
	else if (v1 < v2)
		return (-1);
	else
		return (1);
}

#include <stdio.h>

int	main(void)
{
	int	tab[3] = {1, 4, 6};

	printf("%d", ft_is_sort(tab,3,&tri));
}
 */
