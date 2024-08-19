/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:43:45 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 20:46:47 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

char	*__t_string_memmove(
			char *dst,
			const char *src,
			size_t n)
{
	char		*dst_p;
	const char	*src_p;

	if (dst < src)
	{
		dst_p = dst;
		src_p = src;
		while (n--)
			*(dst_p++) = *(src_p++);
	}
	else
	{
		dst_p = dst + (n - 1);
		src_p = src + (n - 1);
		while (n--)
			*(dst_p--) = *(src_p--);
	}
	return (dst);
}
