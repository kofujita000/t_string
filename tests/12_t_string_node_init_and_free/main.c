/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:26:26 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 22:09:18 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string_list.h"

int	main(void)
{
	t_string_node	*data;

	data = _t_string_node_init();
	if (!data)
	{
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	printf("初期化に成功しました\n");
	_t_string_node_free(data);
	printf("解放に成功しました\n");
	return (0);
}
