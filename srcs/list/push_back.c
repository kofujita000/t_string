#include "../../t_string_list.h"

t_string_node	*t_string_list_push_back(
					t_string_list *const thiz,
					const t_string *const element)
{
	t_string_node	**next_addr;

	if (!thiz->end)
		next_addr = &thiz->begin;
	else
		next_addr = &thiz->end->next;
	*next_addr = _t_string_node_init();
	if (!*next_addr)
		return (*next_addr);
	thiz->end = *next_addr;
	if (element)
		t_string_set((*next_addr)->data, t_string_c_str(element), NULL);
	return (*next_addr);
}
