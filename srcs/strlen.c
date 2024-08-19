/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:34:18 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/09 19:35:17 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

size_t	__t_string_strlen(
			const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (len);
	while (str[len] != 0x00)
		len++;
	return (len);
}
