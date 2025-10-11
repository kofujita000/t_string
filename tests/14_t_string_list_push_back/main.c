/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:26:26 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:20:26 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string_list.h"

int	main(void)
{
	t_string_list	*data;
	t_string_node	*node;

	data = t_string_list_init();
	if (!data)
		return (1);
	node = t_string_list_push_back(data, NULL);
	t_string_set(node->data, "sample", NULL);
	t_string_list_push_back(data, node->data);
	t_string_list_push_back(data, NULL);
	node = t_string_list_begin(data);
	while (node)
	{
		printf("%s\n", t_string_c_str(t_string_node_string(node)));
		node = t_string_node_next(node);
	}
	t_string_list_free(data);
	return (0);
}
