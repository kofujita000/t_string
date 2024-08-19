/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:09:15 by kofujita          #+#    #+#             */
/*   Updated: 2024/07/21 16:30:05 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STRING_H
# define T_STRING_H
# include <stddef.h>
# include <stdlib.h>

# ifndef __STRING_SIZE__
#  define __STRING_SIZE__ 0x10
# endif // __STRING_SIZE__

typedef struct s_string
{
	size_t	__size;
	size_t	__length;
	char	*__data;
}	t_string;

/**
 * t_string の初期化情報を渡す関数
 *
 * r. t_string* -> 初期化情報
 */
t_string	*t_string_init(void);

/**
 * t_string のメモリ解放関数
 *
 * 1. t_string* -> 解放したい構造体
 */
void		t_string_free(
				t_string *ts);

/**
 * t_string のメモリを変更する構造体
 *
 * 1. t_string* -> リサイズしたい構造体
 */
t_string	*t_string_resize(
				t_string *ts,
				size_t rsize);

/**
 * t_string をクリアする関数
 *
 * 1. t_string* -> クリアしたい構造体
 */
void		t_string_clear(
				t_string *ts);

/**
 * t_string の文字列の先頭アドレスを取得する
 *
 * 1. t_string* -> 情報を保持する構造体
 *
 * r. char* -> 文字列の先頭アドレス
 */
char		*t_string_data(
				t_string *ts);

/**
 * t_string の文字列の先頭アドレスを取得する
 *
 * 1. t_string* -> 情報を保持する構造体
 *
 * r. const char* -> 文字列の先頭アドレス
 */
const char	*t_string_c_str(
				t_string *ts);

/**
 * t_string の確保メモリサイズを取得する
 *
 * 1. t_string* -> 確保しているメモリサイズを取得する
 * 
 * r. size_t -> メモリサイズ
 */
size_t		t_string_size(
				t_string *ts);

/**
 * t_string の文字列の長さを取得する
 *
 * 1. t_string* -> 文字列の長さを取得する
 *
 * r. size_t -> 文字列サイズ
 */
size_t		t_string_length(
				t_string *ts);

/**
 * t_string の文字列を設定する
 *
 * 1. t_string* -> 情報を保持する構造体
 * 2. const char* -> 代入したい先頭のアドレス
 * 3. const char* -> 代入したい末尾のアドレス
 *  >> (NULLの場合は、先頭から NULL が出現するまで)
 */
t_string	*t_string_set(
				t_string *ts,
				const char *begin,
				const char *end);

/**
 * t_string の文字列の末尾に文字を追加する
 *
 * 1. t_string* -> 情報を保持する構造体
 * 2. const char -> 代入したい文字
 *
 * r. t_string* -> 情報を保持する構造体
 */
t_string	*t_string_push_back(
				t_string *ts,
				const char chr);

/**
 * t_sring の文字列の末尾に文字列を追加する
 *
 * 1. t_string* -> 情報を保持する構造体
 * 2. const char* -> 代入したい文字列の先頭アドレス
 * 3. const char* -> 代入したい文字列の末尾アドレス
 *  >> (NULLの場合は、先頭から NULL が出現するまで)
 *
 * r. t_string* -> 情報を保持する構造体
 */
t_string	*t_string_append(
				t_string *ts,
				const char *begin,
				const char *end);

/**
 * t_string の文字列代入を行うための関数
 *
 * 1. t_string* -> 情報を保持する構造体
 *
 * r. t_string* -> 情報を保持する構造体
 */
t_string	*t_string_insert(
				t_string *ts,
				size_t pnt,
				const char *begin,
				const char *end);

/**
 * t_string の文字列の削除を行うための関数
 *
 * 1. t_string* -> 情報を保持する構造体
 * 2. size_t -> 削除開始位置
 * 3. size_t -> 削除終了位置 (絶対距離)
 *
 * r. int -> [0 => 処理成功] / [1 => 処理失敗]
 */
int			t_string_erase(
				t_string *ts,
				size_t begin,
				size_t end);

/**
 * t_string 型同士を比較するための関数
 *
 * 1. const t_string* -> 比較元
 * 2. const t_string* -> 比較先
 *
 * r. int -> [0 => 等しい] / [0 より大きい => 第1引数が重たい] / [0 より小さい => 第2引数が重たい]
 */
int			t_string_cmp(
				const t_string *s1,
				const t_string *s2);

/**
 * t_string 型の先頭の文字から文字を探索するための関数
 *
 * 1. const t_string* -> 探索対象 t_string
 * 2. const char -> 探索対象文字
 *
 * r. const char* -> [!NULL => 見つけたアドレス] / [NULL => 探索失敗]
 */
const char	*t_string_find(
				const t_string *ts,
				const char chr);

/**
 * t_string 型の末尾の文字から文字を探索するための関数
 *
 * 1. const t_string* -> 探索対象 t_string
 * 2. const char -> 探索対象文字
 *
 * r. const char* -> [!NULL => 見つけたアドレス] / [NULL => 探索失敗]
 */
const char	*t_string_find_end(
				const t_string *ts,
				const char chr);

/**
 * t_string 型の先頭の文字から文字列を探索するための関数
 *
 * 1. const t_string* -> 探索対象 t_string
 * 2. const char* -> 探索対象文字列の先頭アドレス
 * 3. const char* -> 探索対象文字列の末尾アドレス (NULLの場合は、2の文字列の長さが適応される)
 *
 * r. const char* -> [!NULL => 見つけたアドレス] / [NULL => 探索失敗]
 */
const char	*t_string_search(
				const t_string *ts,
				const char *begin,
				const char *end);

/**
 * char* のメモリ情報を移動する
 */
char		*__t_string_memmove(
				char *dst,
				const char *src,
				size_t n);

/**
 * メモリを確保するための関数
 *
 * 1. t_string* -> 情報を保持する構造体
 * 2. size_t -> 確保しなければならない距離
 */
t_string	*__t_string_realloc(
				t_string *ts,
				size_t size);

/**
 * 文字列の長さを取得するための関数
 *
 * 1. const char* -> 文字列の先頭アドレス
 *
 * r. size_t -> 文字列の長さ
 */
size_t		__t_string_strlen(
				const char *str);

#endif // T_STRING_H
