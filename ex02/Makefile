NAME = mutantstack
SRC = main.cpp MutantStack.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
FLAGS = -Wall -Werror -Wextra -g -std=c++98

all:	$(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
