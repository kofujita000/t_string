/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:41:17 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:41:18 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

t_string_node	*_t_string_node_init(void)
{
	t_string_node	*ret;

	ret = malloc(sizeof(t_string_node));
	if (!ret)
		return (ret);
	ret->data = t_string_init();
	if (!ret->data)
		return (_t_string_node_free(ret), NULL);
	ret->next = NULL;
	return (ret);
}
