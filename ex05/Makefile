NAME		= harl
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -f

SRCS	= 	./main.cpp \
			./Harl.cpp


OBJS	= $(SRCS:.cpp=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
