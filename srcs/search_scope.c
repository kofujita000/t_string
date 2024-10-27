/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_scope.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:47:47 by kofujita          #+#    #+#             */
/*   Updated: 2024/10/27 11:48:08 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_search_scope(
				const t_string *const ts,
				const size_t pnt,
				const char *const begin,
				const char *const end)
{
	size_t		t_len;
	size_t		s_p;
	size_t		t_p;
	const char	*ptr;

	if (!ts || ts->__length <= pnt)
		return (NULL);
	if (end)
		t_len = end - begin;
	else
		t_len = __t_string_strlen(begin);
	(void)(0 & (ptr = ts->__data, s_p = t_len - 1 + pnt, \
				t_p = t_len - 1));
	while (s_p < ts->__length)
	{
		if (ptr[s_p] == begin[t_p])
		{
			if (!t_p)
				return ((char *)(ptr + s_p));
			(void)(0 & (s_p--, t_p--));
			continue ;
		}
		(void)(0 & (s_p += t_len - t_p, t_p = t_len - 1));
	}
	return (0x00);
}
