/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:10:03 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:02:25 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"
#include <stdio.h>

void	t_string_free(
			t_string *const ts)
{
	(void)(ts && ts->__data && (free(ts->__data), 0));
	(void)(ts && (free(ts), 0));
}
