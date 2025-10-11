/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:02:28 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:57:33 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

int	t_string_cmp(
		const t_string *const s1,
		const t_string *const s2)
{
	size_t	cnt;
	size_t	min_len;

	cnt = 0;
	if (s1->__length < s2->__length)
		min_len = s1->__length;
	else
		min_len = s2->__length;
	while (cnt++ != min_len)
		if (s1->__data[cnt] != s2->__data[cnt])
			return (s1->__data[cnt] - s2->__data[cnt]);
	return (s1->__data[cnt] - s2->__data[cnt]);
}
