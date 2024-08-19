# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kofujita <kofujita@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 20:29:24 by kofujita          #+#    #+#              #
#    Updated: 2024/07/17 20:43:07 by kofujita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := tests
INCLUDE_DIR := 
CFLAGS      := -Wall -Wextra -Werror

SRCS		:= main.c

OBJS_DIR	:= objs
OBJS		:= $(SRCS:%.c=$(OBJS_DIR)/%.o)

CC          := cc
RM          := rm -rf
CP          := cp -r
MKDIR       := mkdir -p
MAKE		:= make

INSTALL_DIR := /usr/local

# Progress bar information
SRCS_COUNT := $(words $(SRCS))
PROGRESS := 0
BAR_LENGTH := 40

.PHONY :
	all clean fclean re install

$(NAME) :
	@$(MAKE) -C ../../
	@$(CC) -o $(NAME) $(SRCS) $(LIBRARIES) ../../t_string.a
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
	@$(CP) $(NAME) $(INSTALL_DIR)/lib
	@$(CP) t_string.h $(INSTALL_DIR)/include
