/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:06:41 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 21:14:01 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*t_string_insert(
				t_string *ts,
				size_t pnt,
				const char *begin,
				const char *end)
{
	size_t		len;
	size_t		mv_len;
	t_string	*res;

	if (!ts)
		return (ts);
	if (!end)
		len = __t_string_strlen(begin);
	else
		len = (size_t)(end - begin);
	res = __t_string_realloc(ts, ts->__length + len);
	if (!res)
		return (res);
	mv_len = res->__length - pnt;
	__t_string_memmove(res->__data + pnt + len, res->__data + pnt, mv_len);
	__t_string_memmove(res->__data + pnt, begin, len);
	res->__length += len;
	res->__data[res->__length] = 0x00;
	return (res);
}
