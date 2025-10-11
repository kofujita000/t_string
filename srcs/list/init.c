/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:42:00 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:44:10 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../t_string_list.h"

t_string_list	*t_string_list_init(void)
{
	t_string_list	*ret;

	ret = malloc(sizeof(t_string_list));
	if (!ret)
		return (ret);
	ret->begin = NULL;
	ret->end = NULL;
	ret->size = 0;
	return (ret);
}
