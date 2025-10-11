/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:21:49 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:22:29 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

t_string	*t_string_node_string(
				t_string_node *const thiz)
{
	if (!thiz)
		return (NULL);
	return (thiz->data);
}
