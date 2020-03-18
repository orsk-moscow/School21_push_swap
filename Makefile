# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 20:42:36 by u18188899         #+#    #+#              #
#    Updated: 2020/03/18 12:00:04 by u18188899        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1 = checker

NAME_2 = push_swap

CC 	= gcc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs/

LIBDIR = ./libft/
LIBFT = $(LIBDIR)libft.a

INC = -I includes/push_swap.h -I libft/libft.h

HEADERS = includes/push_swap.h libft/libft.h

SOURCES_1 = \
	checker.c \
	ft_checks.c \
	ft_fnctns_for_psw_swp.c \
	ft_fnctns_for_psw_swp_2.c \
	ft_fncts.c \
	ft_stacks.c \
	ft_structure_0.c \
	instructions.c \
	instructions1.c \
	instructions2.c \
	instructions3.c \
	instructions4.c \
	instructions5.c \
	instructions6.c \
	file1.c \
	file2.c

SOURCES_2 = \
	push_swap.c \
	ft_checks.c \
	ft_fnctns_for_psw_swp.c \
	ft_fnctns_for_psw_swp_2.c \
	ft_fncts.c \
	ft_stacks.c \
	ft_structure_0.c \
	instructions.c \
	instructions1.c \
	instructions2.c \
	instructions3.c \
	instructions4.c \
	instructions5.c \
	instructions6.c \
	file1.c \
	file2.c


OBJECTS_1_LIST = $(patsubst %.c, %.o, $(SOURCES_1))
OBJECTS_1	= $(OBJECTS_1_LIST)

OBJECTS_2_LIST = $(patsubst %.c, %.o, $(SOURCES_2))
OBJECTS_2	= $(OBJECTS_2_LIST)

all: $(NAME_1) $(NAME_2)

$(NAME_1): $(LIBFT) $(OBJECTS_1)
	@$(CC) $(FLAGS) $(LIBFT) $(INC) $(OBJECTS_1) -o $(NAME_1)

$(NAME_2): $(LIBFT) $(OBJECTS_2)
	@$(CC) $(FLAGS) $(LIBFT) $(INC) $(OBJECTS_2) -o $(NAME_2)

$(LIBFT):
	@$(MAKE) -sC $(LIBDIR)

%.o: $(SRCDIR)%.c
	@$(CC) $(CFLAGS) -c $(HEADERS) $<

clean:
	@$(MAKE) -sC $(LIBDIR) clean
	@rm -rf $(OBJECTS_1)
	@rm -rf $(OBJECTS_2)

fclean: clean
	@rm -f $(LIBFT)
	@rm -f $(NAME_1)
	@rm -f $(NAME_2)

re:
	@$(MAKE) fclean
	@$(MAKE) all

test_c:
	@$(CC) -g ./libft/*.c $(addprefix $(SRCDIR), $(SOURCES_1)) \
		-o $(NAME_1)
