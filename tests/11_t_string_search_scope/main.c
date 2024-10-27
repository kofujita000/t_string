/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:50:25 by kofujita          #+#    #+#             */
/*   Updated: 2024/10/27 11:49:27 by kofujita         ###   ########.fr       */
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
	chrs = t_string_search_scope(data1, 5, "gea", NULL);
	if (!chrs)
		printf("値を見つけることができませんでした(%s)\n", chrs);
	else
		printf("値を見つけることができました\n");
	chrs = t_string_search_scope(data1, 5, "ge", NULL);
	if (!chrs)
		printf("値を見つけることができませんでした\n");
	else
		printf("値を見つけることができました(%s)\n", chrs);
	(void)(data1 && (t_string_free(data1), 0));
	return (0);
}
