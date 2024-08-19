/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:03:22 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/20 20:06:22 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_find(
				const t_string *ts,
				const char chr)
{
	const char	*ts_dp;
	size_t		cnt;

	if (!ts)
		return (NULL);
	ts_dp = ts->__data;
	cnt = 0;
	while (cnt != ts->__length)
	{
		if (ts_dp[cnt] == chr)
			return (ts_dp + cnt);
		cnt++;
	}
	return (NULL);
}
