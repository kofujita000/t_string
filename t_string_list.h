/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_string_list.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:04:22 by kofujita          #+#    #+#             */
/*   Updated: 2025/10/13 08:48:23 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STRING_LIST_H
# define T_STRING_LIST_H

# include "t_string.h"

typedef struct s_string_node
{
	t_string				*data;
	struct s_string_node	*next;
}	t_string_node;

/**
 * Function to initialize the t_string_node(private)
 *
 * r. t_string_node* -> Initialization information
 */
t_string_node	*_t_string_node_init(void);

/**
 * Function to free the t_string_node(private)
 *
 * 1. t_string_node *const -> Structure to free
 */
void			_t_string_node_free(
					t_string_node *const thiz);

/**
 * Function to get the next node address
 *
 * 1. t_string_node *const -> Structure holding information
 *
 * r. t_string_node* -> Next node address(In the NULL case, node end point)
 */
t_string_node	*t_string_node_next(
					t_string_node *const thiz);

/**
 * Function to get the t_string address
 *
 * 1. t_string_node *const -> Structure holding information
 *
 * r. t_string* -> t_string address
 */
t_string		*t_string_node_string(
					t_string_node *const thiz);

typedef struct s_string_list
{
	struct s_string_node	*begin;
	struct s_string_node	*end;
	size_t					size;
}	t_string_list;

/**
 * Function to initialize the t_string_list
 *
 * r. t_string_list* -> Initialization information
 */
t_string_list	*t_string_list_init(void);

/**
 * Function to free the t_string_list
 *
 * 1. t_string_list *const -> Structure to free
 */
void			t_string_list_free(
					t_string_list *const thiz);

/**
 * Function to push_back the element(copy)
 *
 * 1. t_string_list *const  -> Structure holding information
 * 2. const t_string *const -> push_back element(NULL ... push_back empty)
 *
 * r. t_string_node* -> This node address was pushed back element
 */
t_string_node	*t_string_list_push_back(
					t_string_list *const thiz,
					const t_string *const element);

/**
 * Function to push_back the element(copy)
 *
 * 1. t_string_list *const  -> Structure holding information
 * 2. const char *const     -> push_back element(NULL ... push_back empty)
 *
 * r. t_string_node* -> This node address was pushed back element
 */
t_string_node	*t_string_list_push_back_char_ptr(
					t_string_list *const thiz,
					const char *const element);

/**
 * Function to get the list size
 *
 * 1. t_string_list *const -> Structure holding information
 *
 * r. size_t -> List size
 */
size_t			t_string_list_size(
					const t_string_list *const thiz);

/**
 * Function to get the begin address
 *
 * 1. t_string_list *const -> Structure holding information
 *
 * r. t_string_node* -> Node address
 */
t_string_node	*t_string_list_begin(
					t_string_list *const thiz);

/**
 * Function to clear the string list
 *
 * 1. t_string_list *const -> Structure holding information
 */
void			t_string_list_clear(
					t_string_list *const thiz);

#endif  // T_STRING_LIST_H
