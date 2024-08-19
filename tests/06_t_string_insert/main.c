/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:50:25 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/17 21:12:49 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string.h"

int	main(void)
{
	t_string	*data;
	const char	*chrs;

	data = t_string_init();
	if (!data)
	{
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	chrs = "absdefg";
	printf("`%s` という文字列を設定します\n", chrs);
	t_string_set(data, chrs, NULL);
	printf("%s\n", t_string_c_str(data));
	printf("`XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX` をappendします\n");
	t_string_append(data, "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", NULL);
	printf("%s\n", t_string_c_str(data));
	printf("先頭から5文字削除します\n");
	t_string_erase(data, 0, 5);
	printf("%s\n", t_string_c_str(data));
	printf("5文字目から文字をインサートします\n");
	t_string_insert(data, 5, "hogehoge", NULL);
	printf("%s\n", t_string_c_str(data));
	t_string_free(data);
	return (0);
}
