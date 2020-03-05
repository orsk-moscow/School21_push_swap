# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: u18188899 <u18188899@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 20:42:36 by u18188899         #+#    #+#              #
#    Updated: 2020/03/05 20:50:52 by u18188899        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1 = checker

NAME_2 = push_swap

CC 	= gcc

CFLAGS = -Wall -Wextra -Werror

OBJDIR = ./objects/

GNLDIR = ./gnl/

GNL_SRC = get_next_line.c

SRCDIR = ./srcs/

LIBDIR = ./libft/
LIBFT = $(LIBDIR)libft.a

INC = -I includes/push_swap.h -I gnl/get_next_line.h -I libft/libft.h

HEADERS = includes/push_swap.h gnl/get_next_line.h libft/libft.h

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
	instructions6.c

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
	instructions6.c

OBJECTS_1_LIST = $(patsubst %.c, %.o, $(SOURCES_1) $(GNL_SRC))
OBJECTS_1	= $(addprefix $(OBJDIR), $(OBJECTS_1_LIST))

OBJECTS_2_LIST = $(patsubst %.c, %.o, $(SOURCES_2))
OBJECTS_2	= $(addprefix $(OBJDIR), $(OBJECTS_2_LIST))

all: $(NAME_1) $(NAME_2)

$(NAME_1): $(LIBFT) $(OBJDIR) $(OBJECTS_1)
	@$(CC) $(FLAGS) $(LIBFT) $(INC) $(OBJECTS) -o $(NAME_1)

$(NAME_2): $(LIBFT) $(OBJDIR) $(OBJECTS_2)
	@$(CC) $(FLAGS) $(LIBFT) $(INC) $(OBJECTS) -o $(NAME_2)

$(LIBFT):
	@$(MAKE) -sC $(LIBDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@$(CC) $(CFLAGS) -c $(HEADERS) $< && mv $(patsubst %.c, %.o, $(SOURCES_1)) $(OBJDIR)

$(OBJDIR)%.o: $(GNLDIR)%.c
	@$(CC) $(CFLAGS) -c $(HEADERS) $< && mv $(patsubst %.c, %.o, $(GNL_SRC)) $(OBJDIR)

clean:
	@$(MAKE) -sC $(LIBDIR) clean
	@rm -rf $(OBJECTS)
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(LIBFT)
	@rm -f $(NAME_1)
	@rm -f $(NAME_2)

re:
	@$(MAKE) fclean
	@$(MAKE) all