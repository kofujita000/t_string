/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:54:23 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 20:55:51 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

void	t_string_clear(
				t_string *ts)
{
	if (!ts || ts->__size == 0)
		return ;
	ts->__length = 0;
	ts->__data[0] = 0x00;
}