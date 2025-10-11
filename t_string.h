/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:09:15 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/11 21:57:04 by kofujita         ###   ########.fr       */
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
 * Function to pass initialization information for t_string
 *
 * r. t_string* -> Initialization information
 */
t_string	*t_string_init(void);

/**
 * Memory deallocation function for t_string
 *
 * 1. t_string* -> Structure to free
 */
void		t_string_free(
				t_string *const ts);

/**
 * Structure to modify memory of t_string
 *
 * 1. t_string* -> Structure to resize
 */
t_string	*t_string_resize(
				t_string *const ts,
				size_t rsize);

/**
 * Function to clear t_string
 *
 * 1. t_string* -> Structure to clear
 */
void		t_string_clear(
				t_string *const ts);

/**
 * Get head address of t_string string
 *
 * 1. t_string* -> Structure holding information
 *
 * r. char* -> Head address of string
 */
char		*t_string_data(
				t_string *const ts);

/**
 * Get head address of t_string string
 *
 * 1. t_string* -> Structure holding information
 *
 * r. const char* -> Head address of string
 */
const char	*t_string_c_str(
				const t_string *const ts);

/**
 * Get end address of t_string string
 *
 * 1. const t_string *const -> Structure holding information
 *
 * r. const char* -> End address of string (error if NULL)
 */
const char	*t_string_end(
				const t_string *const ts);

/**
 * Get allocated memory size of t_string
 *
 * 1. t_string* -> Get allocated memory size
 * 
 * r. size_t -> Memory size
 */
size_t		t_string_size(
				const t_string *const ts);

/**
 * Get length of t_string string
 *
 * 1. t_string* -> Get length of string
 *
 * r. size_t -> String size
 */
size_t		t_string_length(
				const t_string *const ts);

/**
 * Set string of t_string
 *
 * 1. t_string* -> Structure holding information
 * 2. const char* -> Head address to assign
 * 3. const char* -> End address to assign
 *  >> (If NULL, from head until NULL appears)
 */
t_string	*t_string_set(
				t_string *const ts,
				const char *begin,
				const char *end);

/**
 * Add character to end of t_string string
 *
 * 1. t_string* -> Structure holding information
 * 2. const char -> Character to assign
 *
 * r. t_string* -> Structure holding information
 */
t_string	*t_string_push_back(
				t_string *const ts,
				const char chr);

/**
 * Add string to end of t_string string
 *
 * 1. t_string* -> Structure holding information
 * 2. const char* -> Head address of string to assign
 * 3. const char* -> End address of string to assign
 *  >> (If NULL, from head until NULL appears)
 *
 * r. t_string* -> Structure holding information
 */
t_string	*t_string_append(
				t_string *const ts,
				const char *begin,
				const char *end);

/**
 * Function to perform string assignment for t_string
 *
 * 1. t_string* -> Structure holding information
 *
 * r. t_string* -> Structure holding information
 */
t_string	*t_string_insert(
				t_string *const ts,
				size_t pnt,
				const char *begin,
				const char *end);

/**
 * Function to perform string deletion for t_string
 *
 * 1. t_string* -> Structure holding information
 * 2. size_t -> Deletion start position
 * 3. size_t -> Deletion end position (absolute distance)
 *
 * r. int -> [0 => Processing success] / [1 => Processing failure]
 */
int			t_string_erase(
				t_string *const ts,
				size_t begin,
				size_t end);

/**
 * Function to compare t_string types
 *
 * 1. const t_string* -> Comparison source
 * 2. const t_string* -> Comparison destination
 *
 * r. int -> [0 => Equal]
 *           [Greater than 0 => First argument is heavier]
 *           [Less than 0 => Second argument is heavier]
 */
int			t_string_cmp(
				const t_string *const s1,
				const t_string *const s2);

/**
 * Function to search for character from head character of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const char -> Target character to search
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_find(
				const t_string *const ts,
				const char chr);

/**
 * Function to search for character from end character of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const char -> Target character to search
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_find_end(
				const t_string *const ts,
				const char chr);

/**
 * Function to search for character from head address
 * + specified start distance of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const size_t -> Specified start distance
 * 3. const char -> Target character to search
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_find_scope(
				const t_string *const ts,
				const size_t pnt,
				const char chr);

/**
 * Function to search for string from head character of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const char* -> Head address of target string to search
 * 3. const char* -> End address of target string to search
 * (If NULL, length of string 2 is applied)
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_search(
				const t_string *const ts,
				const char *begin,
				const char *end);

/**
 * Function to search for string from end character of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const char* -> Head address of target string to search
 * 3. const char* -> End address of target string to search
 * (If NULL, length of string 2 is applied)
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_search_end(
				const t_string *const ts,
				const char *begin,
				const char *end);

/**
 * Function to search for string from head address
 * + specified start distance of t_string type
 *
 * 1. const t_string* -> Target t_string to search
 * 2. const size_t -> Specified start distance
 * 3. const char -> Target character to search
 *
 * r. const char* -> [!NULL => Found address] / [NULL => Search failure]
 */
const char	*t_string_search_scope(
				const t_string *const ts,
				const size_t pnt,
				const char *const begin,
				const char *const end);

/**
 * Move memory information of char*
 */
char		*__t_string_memmove(
				char *dst,
				const char *src,
				size_t n);

/**
 * Function to allocate memory
 *
 * 1. t_string* -> Structure holding information
 * 2. size_t -> Distance that must be allocated
 */
t_string	*__t_string_realloc(
				t_string *const ts,
				size_t size);

/**
 * Function to get length of string
 *
 * 1. const char* -> Head address of string
 *
 * r. size_t -> Length of string
 */
size_t		__t_string_strlen(
				const char *str);

#endif // T_STRING_H
