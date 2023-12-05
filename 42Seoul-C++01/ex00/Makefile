NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -fr $(OBJS)

fclean : clean
	rm -fr $(NAME)

re :
	make fclean
	make all

.PHONY = all clean fclean re
