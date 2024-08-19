/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:12:48 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/09 19:42:44 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*t_string_resize(
				t_string *ts,
				size_t rsize)
{
	char	*stk;
	size_t	cp_size;

	if (!ts)
		return (ts);
	stk = (char *)malloc(rsize);
	if (!stk)
		return (t_string_free(ts), NULL);
	if (rsize < ts->__length)
		cp_size = rsize;
	else
		cp_size = ts->__length;
	stk = __t_string_memmove(stk, ts->__data, cp_size);
	free(ts->__data);
	ts->__data = stk;
	ts->__size = rsize;
	return (ts);
}
