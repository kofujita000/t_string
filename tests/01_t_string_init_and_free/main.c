/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:26:26 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 20:48:39 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string.h"

int	main(void)
{
	t_string	*data;

	data = t_string_init();
	if (!data)
	{
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	printf("初期化に成功しました\n");
	t_string_free(data);
	printf("解放に成功しました\n");
	return (0);
}
