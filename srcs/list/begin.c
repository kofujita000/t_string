/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:20:52 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:21:27 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

t_string_node	*t_string_list_begin(
					t_string_list *const thiz)
{
	if (!thiz)
		return (NULL);
	return (thiz->begin);
}
