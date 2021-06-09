NAME		= convert

MAKER		= Makefile

SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS) $(MAKER)
			$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)
		
clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY:		all clean fclean re