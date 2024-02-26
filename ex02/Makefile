NAME = mutantstack
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
FLAGSCXX = -Wall -Werror -Wextra -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGSCXX) $(OBJ) -o $(NAME)

%o: %.cpp
	$(CXX) $(FLAGSXX) -c $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all

.PHONY: all re clean fclean