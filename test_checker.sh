# cd libft
# make
# make clean
# cd ..

# /Users/u18188899/School21_push_swap/libft/libft.a \

# cd objects && \
gcc -c \
	./gnl/get_next_line.c \
	./checker.c \
	./srcs/*.c && \
gcc \
	./libft/libft.a \
	-I ./gnl/get_next_line.h \
	-I ./push_swap.h \
	*.o \
	-o checker 
	# && \
# cd ..
# gcc -g \
# 	./libft/*.c \
# 	./libft/libft.h \
# 	./gnl/get_next_line.c \
# 	./gnl/get_next_line.h \
# 	./checker.c \
# 	./push_swap.h \
# 	./srcs/*

# /Users/u18188899/School21_push_swap/libft/*.c \
# /Users/u18188899/School21_push_swap/libft/libft.h \
# /Users/u18188899/School21_push_swap/gnl/get_next_line.c \
# /Users/u18188899/School21_push_swap/gnl/get_next_line.h \
# /Users/u18188899/School21_push_swap/checker.c \
# /Users/u18188899/School21_push_swap/push_swap.h \
# /Users/u18188899/School21_push_swap/srcs/*