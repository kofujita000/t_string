/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:06:38 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/21 16:29:25 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_find_end(
				const t_string *ts,
				const char chr)
{
	const char	*ts_dp;
	size_t		cnt;

	if (!ts)
		return (NULL);
	ts_dp = ts->__data;
	cnt = ts->__length;
	while (cnt--)
		if (ts_dp[cnt] == chr)
			return (ts_dp + cnt);
	return (NULL);
}
