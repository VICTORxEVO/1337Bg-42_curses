NAME = libftprintf.a

S = ft_printf.c \
Func_I.c \
Func_II.c 

B = $(S:.c=.o)

CC = cc 

F = -Wall -Wextra -Werror
all : $(NAME)

$(NAME) : $(B)

%.o : %.c
		$(CC) -c $(F) $<
		ar -rcs $(NAME) $@

clean : 
		rm -f $(B)


fclean :
		rm -rf $(NAME) $(B)

re : fclean all

.phony: all clean fclean re
