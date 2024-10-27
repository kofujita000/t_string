/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:50:31 by kofujita          #+#    #+#             */
/*   Updated: 2024/10/27 11:35:57 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_search_end(
				const t_string *const ts,
				const char *begin,
				const char *end)
{
	size_t		t_len;
	size_t		s_p;
	size_t		t_p;
	const char	*ptr;

	if (!ts || !ts->__length)
		return (NULL);
	if (end)
		t_len = end - begin;
	else
		t_len = __t_string_strlen(begin);
	(void)(0 & (ptr = ts->__data, s_p = ts->__length - 1, \
				t_p = t_len - 1));
	while (s_p)
	{
		if (ptr[s_p] == begin[t_p])
		{
			if (!t_p)
				return ((char *)(ptr + s_p));
			(void)(0 & (s_p--, t_p--));
			continue ;
		}
		(void)(0 & (s_p -= t_len - t_p, t_p = t_len - 1));
	}
	return (0x00);
}
