/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:50:25 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/19 19:43:46 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string.h"

int	main(void)
{
	t_string	*data1;
	t_string	*data2;
	const char	*chrs;

	data1 = t_string_init();
	data2 = t_string_init();
	if (!data1 || !data2)
	{
		(void)(data1 && (t_string_free(data1), 0));
		(void)(data2 && (t_string_free(data2), 0));
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	t_string_set(data1, "hogehoge", NULL);
	t_string_set(data2, "hogehog", NULL);
	printf("%s\n", t_string_c_str(data1));
	printf("%s\n", t_string_c_str(data2));
	if (t_string_cmp(data1, data2))
		printf("値が等しくありません\n");
	else
		printf("値が等しいです\n");
	(void)(data1 && (t_string_free(data1), 0));
	(void)(data2 && (t_string_free(data2), 0));
	return (0);
}
