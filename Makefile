NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c
OBJS = $(SRCS:.c=.o)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
all:	${NAME}
clean:
		${RM} ${OBJS} 
fclean: clean
		${RM} ${NAME}
re: fclean all
.PHONY: all clean fclean re
