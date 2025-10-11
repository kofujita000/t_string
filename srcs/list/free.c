/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:44:17 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:28:36 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

void	t_string_list_free(
			t_string_list *const thiz)
{
	t_string_node	*node[2];

	node[0] = thiz->begin;
	while (node[0])
	{
		node[1] = t_string_node_next(node[0]);
		_t_string_node_free(node[0]);
		node[0] = node[1];
	}
	thiz->begin = NULL;
	thiz->end = NULL;
	thiz->size = 0;
	free(thiz);
}
