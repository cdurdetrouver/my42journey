/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:32:52 by gbazart           #+#    #+#             */
/*   Updated: 2023/08/24 16:00:36 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_create_elem(void *data);

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*begin;
	struct s_list *pl;

	begin->data = data;
	pl = begin_list;
	begin->next = begin_list;

	*begin_list = begin;
}
