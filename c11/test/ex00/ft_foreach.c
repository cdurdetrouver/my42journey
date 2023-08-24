/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:51:10 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:02:04 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	nbr = nb + 48;
	write(1, &nbr, 1);
}

int	main(void)
{
	int	tab[6] = {0,1,2,3,4,5};

	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}
 */
