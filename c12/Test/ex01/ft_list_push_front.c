/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:32:52 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/24 15:40:32 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data);

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*begin;

	begin->data = data;
	begin->next = begin_list[0];

	*begin_list = begin;
}

int main()
{
	t_list	*list;

	ft_list_push_front(list, 3);
	ft_list_push_front(list, 4);
	ft_list_push_front(list, 5);
}