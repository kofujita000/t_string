/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:41:22 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:41:22 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

void	_t_string_node_free(
			t_string_node *const thiz)
{
	if (thiz->data)
		t_string_free(thiz->data);
	thiz->data = NULL;
	thiz->next = NULL;
	free(thiz);
}
