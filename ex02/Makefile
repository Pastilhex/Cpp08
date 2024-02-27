NAME = mutantstack
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
FLAGSCXX = -Wall -Werror -Wextra -g -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGSCXX) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGSCXX)  -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean