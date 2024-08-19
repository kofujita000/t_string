/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:20:41 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/09 19:27:47 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*__t_string_realloc(
			t_string *ts,
			size_t size)
{
	size_t	rsize;

	if (!(ts->__size <= ts->__length + size + 1))
		return (ts);
	rsize = ts->__size * 2;
	while (rsize < ts->__length + size + 1)
		rsize *= 2;
	return (t_string_resize(ts, rsize));
}
