/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_scope.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:52:23 by kofujita          #+#    #+#             */
/*   Updated: 2024/09/05 18:53:35 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_find_scope(
				const t_string *ts,
				const size_t pnt,
				const char chr)
{
	const char	*ts_dp;
	size_t		cnt;

	if (!ts)
		return (NULL);
	ts_dp = ts->__data;
	cnt = pnt;
	while (cnt < ts->__length)
	{
		if (ts_dp[cnt] == chr)
			return (ts_dp + cnt);
		cnt++;
	}
	return (NULL);
}
