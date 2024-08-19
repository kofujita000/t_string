/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:50:25 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/19 20:00:41 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../t_string.h"

int	main(void)
{
	t_string	*data;
	const char	*chrs;
	size_t		n;

	data = t_string_init();
	if (!data)
	{
		printf("メモリの確保に失敗しました\n");
		return (1);
	}
	t_string_set(data, "hogehoge", NULL);
	printf("%s\n", t_string_c_str(data));
	t_string_append(data, "piyoipyo", NULL);
	printf("%s\n", t_string_c_str(data));
	t_string_erase(data, 1, 2);
	printf("%s\n", t_string_data(data));
	t_string_free(data);
	return (0);
}
