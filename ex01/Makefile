NAME		= horde
CC			= c++
CFLAGS		= -g3 -Wall -Werror -Wextra -std=c++98
RM			= rm -f

SRC_PATH	= ./srcs/
OBJ_PATH	= ./objs/

SRCS		= $(wildcard $(SRC_PATH)*.cpp)
OBJS		= $(addprefix $(OBJ_PATH),$(notdir $(SRCS:.cpp=.o)))

all	: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_PATH)%.o : $(SRC_PATH)%.cpp
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	$(RM) $(OBJ_PATH)*.o
	$(RM) -r $(OBJ_PATH)
	

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

