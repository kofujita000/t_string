/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:35:32 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/09 19:50:44 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*t_string_set(
				t_string *ts,
				const char *begin,
				const char *end)
{
	size_t		len;
	t_string	*res;

	if (!ts)
		return (ts);
	if (!end)
		len = __t_string_strlen(begin);
	else
		len = (size_t)(end - begin);
	t_string_clear(ts);
	res = __t_string_realloc(ts, len);
	if (!res)
		return (res);
	__t_string_memmove(res->__data + res->__length, begin, len);
	res->__length += len;
	res->__data[res->__length] = 0x00;
	return (res);
}
