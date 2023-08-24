/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:18:41 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:09:23 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		count;
	int		scount;
	char	*temp;

	count = 1;
	while (tab[count])
	{
		scount = count;
		while (cmp(tab[scount - 1], tab[scount]) > 0 && scount >= 1)
		{
			temp = tab[scount - 1];
			tab[scount - 1] = tab[scount];
			tab[scount] = temp;
			scount--;
		}
		count++;
	}
}

/*
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[7] = {"a", "c", "b","d", "e" , "a", 0};
	int		i;

	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	i = 0;
	while (i < 7)
		printf("%s\n", tab[i++]);
	return (0);
}

 */
