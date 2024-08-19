/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:02:33 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/19 20:22:35 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

int	t_string_erase(
		t_string *ts,
		size_t begin,
		size_t end)
{
	if (!ts || end <= begin || ts->__length < end)
		return (1);
	__t_string_memmove(ts->__data + begin, ts->__data + end, \
			end - begin);
	ts->__length -= end - begin;
	ts->__data[ts->__length] = 0x00;
	return (0);
}
