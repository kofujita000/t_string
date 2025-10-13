# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 20:29:24 by kofujita          #+#    #+#              #
#    Updated: 2025/10/13 08:50:50 by kofujita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := libtstring.a
INCLUDE_DIR := 
CFLAGS      := -Wall -Wextra -Werror -g3

SRCS		:= srcs/append.c \
			   srcs/c_str.c \
			   srcs/clear.c \
			   srcs/cmp.c \
			   srcs/end.c \
			   srcs/erase.c \
			   srcs/find.c \
			   srcs/find_end.c \
			   srcs/find_scope.c \
			   srcs/data.c \
			   srcs/free.c \
			   srcs/init.c \
			   srcs/insert.c \
			   srcs/length.c \
			   srcs/memmove.c \
			   srcs/push_back.c \
			   srcs/realloc.c \
			   srcs/resize.c \
			   srcs/search.c \
			   srcs/search_end.c \
			   srcs/search_scope.c \
			   srcs/set.c \
			   srcs/size.c \
			   srcs/strlen.c \
			   srcs/list/begin.c \
			   srcs/list/clear.c \
			   srcs/list/free.c \
			   srcs/list/init.c \
			   srcs/list/push_back.c \
			   srcs/list/push_back_char_ptr.c \
			   srcs/list/size.c \
			   srcs/node/free.c \
			   srcs/node/init.c \
			   srcs/node/next.c \
			   srcs/node/string.c

OBJS_DIR	:= objs
OBJS		:= $(SRCS:%.c=$(OBJS_DIR)/%.o)

AR			:= ar rcs
CC          := cc
RM          := rm -rf
CP          := cp -r
MKDIR       := mkdir -p

INSTALL_DIR := /usr/local

# Progress bar information
SRCS_COUNT := $(words $(SRCS))
PROGRESS := 0
BAR_LENGTH := 40

.PHONY :
	all clean fclean re install

$(OBJS_DIR)/%.o: %.c
	@$(MKDIR) $(OBJS_DIR) $(OBJS_DIR)/srcs
	@$(MKDIR) $(OBJS_DIR) $(OBJS_DIR)/srcs/list
	@$(MKDIR) $(OBJS_DIR) $(OBJS_DIR)/srcs/node
	@$(CC) $(CFLAGS) $(INCLUDE_DIR) -o $@ -c $<
	@$(eval PROGRESS=$(shell echo $$(($(PROGRESS) + 1))))
	@PERCENTAGE=$$(($(PROGRESS) * 100 / $(SRCS_COUNT))) ; \
	BAR=$$(($(BAR_LENGTH) * $$PERCENTAGE / 100)) ; \
	SPACES=$$(($(BAR_LENGTH) - $$BAR)) ; \
	printf "\r\033[K" ; \
	printf "Progress: [" ; \
	for i in $$(seq 1 $$BAR); do printf "="; done ; \
	printf ">" ; \
	for i in $$(seq 1 $$SPACES); do printf " "; done ; \
	printf "] $$PERCENTAGE%% ($@)"

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo Created $(NAME)

all : $(NAME)

clean :
	@$(RM) $(OBJS_DIR)
	@echo Deleted OBJS

fclean : clean
	@$(RM) $(NAME)
	@echo Deleted $(NAME)

re : fclean all

install : all
	@$(MKDIR) $(INSTALL_DIR)/lib
	@$(MKDIR) $(INSTALL_DIR)/include
	@$(CP) $(NAME) $(INSTALL_DIR)/lib
	@$(CP) t_string.h $(INSTALL_DIR)/include
