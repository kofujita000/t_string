/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back_char_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 23:03:37 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/13 08:43:43 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

t_string_node	*t_string_list_push_back_char_ptr(
					t_string_list *const thiz,
					const char *const element)
{
	t_string_node	**next_addr;

	if (!thiz->end)
		next_addr = &thiz->begin;
	else
		next_addr = &thiz->end->next;
	*next_addr = _t_string_node_init();
	if (!*next_addr)
		return (*next_addr);
	thiz->end = *next_addr;
	thiz->size++;
	if (element)
		t_string_set((*next_addr)->data, element, NULL);
	return (*next_addr);
}
