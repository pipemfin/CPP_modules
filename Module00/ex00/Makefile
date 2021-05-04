NAME		= megaphone

SRCS		= main.cpp

OBJS		= $(SRCS:.c=.o)

CC		= clang++

RM		= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		
clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re