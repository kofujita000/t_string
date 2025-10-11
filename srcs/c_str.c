/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:59:35 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:57:21 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

const char	*t_string_c_str(
			const t_string *const ts)
{
	if (!ts)
		return (NULL);
	return (ts->__data);
}
