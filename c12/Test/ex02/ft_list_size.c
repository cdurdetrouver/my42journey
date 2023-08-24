/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:41:03 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/24 15:50:32 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);

int ft_list_size(t_list *begin_list)
{
	int len;

	while (begin_list->data)
	{
		len++;
		begin_list++;
	}
	return (len);
}

int main(void)
{
 	t_list *list;
	int	i = 3;
	void	*pv;
	pv = &i;

	int	i2 = 4;
	void	*pv2;
	pv2 = &i2;

	int	i3 = 5;
	void	*pv3;
	pv3 = &i3;

	ft_list_push_front(&list, pv);
	ft_list_push_front(&list, pv2);
	ft_list_push_front(&list, pv3);
	printf("%d", ft_list_size(list));
}