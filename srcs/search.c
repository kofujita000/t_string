/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:08:18 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/21 16:29:07 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_search(
				const t_string *ts,
				const char *begin,
				const char *end)
{
	size_t		t_len;
	size_t		s_p;
	size_t		t_p;
	const char	*pnt;

	if (!ts)
		return (NULL);
	if (end)
		t_len = end - begin;
	else
		t_len = __t_string_strlen(begin);
	(void)(0 & (pnt = ts->__data, s_p = t_len - 1, t_p = t_len - 1));
	while (s_p < ts->__length)
	{
		if (pnt[s_p] == begin[t_p])
		{
			if (!t_p)
				return ((char *)(pnt + s_p));
			(void)(0 & (s_p--, t_p--));
			continue ;
		}
		(void)(0 & (s_p += t_len - t_p, t_p = t_len - 1));
	}
	return (0x00);
}
