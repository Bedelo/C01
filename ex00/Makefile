NAME	= zombie
CXX		= c++
CXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -f

SRCS	=	./Zombie.cpp \
			./newZombie.cpp \
			./randomChump.cpp \
			./main.cpp

OBJS	= $(SRCS:.cpp=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) $(CXFLAGS) -c $< -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

