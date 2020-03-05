NAME_1 = checker

NAME_2 = push_swap

CC 	= gcc

CFLAGS = -Wall -Wextra -Werror

OBJDIR = ./objects/

GNLDIR = ./gnl/

GNL_SRC = get_next_line.c

SRCDIR = ./srcs/

LIB = ./libft/libft.a

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

OBJDIR = ./objects/
OBJECTS_1_LIST = $(patsubst %.c, %.o, $(SOURCES_1) $(GNL_SRC))
OBJECTS	= $(OBJECTS_1_LIST)

all: $(NAME_1) 

$(NAME_1): $(OBJECTS)
	@$(CC) $(FLAGS) $(LIB) $(INC) $(OBJECTS) -o $(NAME_1)

%.o : $(SRCDIR)%.c
	@$(CC) $(CFLAGS) -c $(HEADERS) $<
