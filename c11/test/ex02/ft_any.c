/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:35:33 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/20 15:30:24 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
		if (f(*tab++) != 0)
			return (1);
	return (0);
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
	char	*tab[5] = {"ok", "pq", "pt", "test", NULL};
	printf("%d", ft_any(tab,&lower));
}
 */
