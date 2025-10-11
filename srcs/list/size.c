/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 23:02:09 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 23:02:58 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

size_t	t_string_list_size(
			const t_string_list *const thiz)
{
	if (!thiz)
		return (0);
	return (thiz->size);
}
