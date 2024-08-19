/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:44:27 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/09 19:47:07 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*t_string_push_back(
				t_string *ts,
				const char chr)
{
	t_string	*res;

	if (!ts)
		return (ts);
	res = __t_string_realloc(ts, 1);
	if (!res)
		return (res);
	res->__data[ts->__length++] = chr;
	res->__data[ts->__length] = 0x00;
	return (res);
}
