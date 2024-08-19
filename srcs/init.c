/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:03:21 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 20:49:41 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../t_string.h"

t_string	*t_string_init(void)
{
	t_string	*ret;

	ret = (t_string *)malloc(sizeof(t_string));
	if (!ret)
		return (ret);
	ret->__data = NULL;
	ret->__size = 0x00;
	ret->__length = 0x00;
	ret = t_string_resize(ret, __STRING_SIZE__);
	if (!ret)
		return (ret);
	if (ret->__size)
		ret->__data[0] = 0x00;
	return (ret);
}
