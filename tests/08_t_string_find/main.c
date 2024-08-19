/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:50:25 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/21 16:33:59 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string.h"

int	main(void)
{
	t_string	*data1;
	const char	*chrs;

	data1 = t_string_init();
	if (!data1)
	{
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	t_string_set(data1, "hogehoge", NULL);
	chrs = t_string_find(data1, 'a');
	if (!chrs)
		printf("値を見つけることができませんでした\n");
	else
		printf("値を見つけることができました\n");
	(void)(data1 && (t_string_free(data1), 0));
	return (0);
}
