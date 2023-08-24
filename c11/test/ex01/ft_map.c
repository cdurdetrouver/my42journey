/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:27:23 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:03:01 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab2;

	tab2 = malloc(sizeof(int) * length);
	if (tab2 == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}

/*
int	add2(int nb)
{
	return (nb + 2);
}

int	main(void)
{
	int	tab[6] = {0,1,2,3,4,5};
	int	*tab2;
	int	i;

	tab2 = ft_map(tab, 6, &add2);
	i = 0;
	while (i < 6)
		printf("%d", tab2[i++]);
	return (0);
}
 */
