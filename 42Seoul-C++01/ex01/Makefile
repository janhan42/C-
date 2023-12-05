NAME = phonbook

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp			\
				Contact.cpp

OBJS		=	$(SRCS:.cpp=.o)


%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
