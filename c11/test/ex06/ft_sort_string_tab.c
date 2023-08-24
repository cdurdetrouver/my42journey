/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:02:02 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/19 14:07:07 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_string_tab(char **tab)
{
	int		count;
	int		scount;
	char	*temp;

	count = 1;
	while (tab[count])
	{
		scount = count;
		while (ft_strcmp(tab[scount - 1], tab[scount]) > 0 && scount >= 1)
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
#include <stdio.h>

int	main(void)
{
	char	*tab[7] = {"a", "c", "b","d", "e" , "a", NULL};
	int		i;

	ft_sort_string_tab(tab);
	i = 0;
	while (i < 7)
		printf("%s\n", tab[i++]);
	return (0);
}
 */
