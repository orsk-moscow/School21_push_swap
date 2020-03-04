# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/04 22:29:47 by u18188899         #+#    #+#              #
#    Updated: 2020/03/04 22:48:41 by u18188899        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 	= gcc

NAME_1 = checker

NAME_2 = push_swap

CFLAGS = -Wall -Wextra -Werror

SOURCES_1 = \
	./libft/libft.a \
	./gnl/get_next_line.c \
	./gnl/get_next_line.h \
	./checker.c \
	./push_swap.h \
	srcs/ft_checks.c \
	srcs/ft_fnctns_for_psw_swp.c \
	srcs/ft_fnctns_for_psw_swp_2.c \
	srcs/ft_fncts.c \
	srcs/ft_stacks.c \
	srcs/ft_structure_0.c \
	srcs/instructions.c \
	srcs/instructions1.c \
	srcs/instructions2.c \
	srcs/instructions3.c \
	srcs/instructions4.c \
	srcs/instructions5.c \
	srcs/instructions6.c

SOURCES_2 = \
	./libft/libft.a \
	./push_swap.c \
	./push_swap.h \
	srcs/ft_checks.c \
	srcs/ft_fnctns_for_psw_swp.c \
	srcs/ft_fnctns_for_psw_swp_2.c \
	srcs/ft_fncts.c \
	srcs/ft_stacks.c \
	srcs/ft_structure_0.c \
	srcs/instructions.c \
	srcs/instructions1.c \
	srcs/instructions2.c \
	srcs/instructions3.c \
	srcs/instructions4.c \
	srcs/instructions5.c \
	srcs/instructions6.c

OBJECTS_1 = $(SOURCES_1:%.c=%.o)

OBJECTS_2 = $(SOURCES_2:%.c=%.o)

all: $(NAME_1) $(NAME_2)

$(NAME_1): $(CC) $(CFLAGS)
	ar rcs $(NAME_2) $(OBJECTS_1)

$(NAME_2): $(OBJECTS_2)
	ar rcs $(NAME_2) $(OBJECTS_2)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf $(OBJECTS_1) $(OBJECTS_2)

fclean: clean
	rm -rf $(NAME_1) $(NAME_2)

re: fclean all
