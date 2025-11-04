NAME =  program
SOURCES = ClapTrap.cpp main.cpp ScavTrap.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SOURCES:.cpp=.o)
HEADER = ClapTrap.hpp ScavTrap.cpp

%.o: %.cpp $(HEADER)
	g++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	g++ $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all