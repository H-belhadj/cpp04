CXX=c++
SRC = Animal.cpp brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp 
DFS = Animal.hpp brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp 

OSRC=$(SRC:.cpp=.o)
NAME= ClapTrap
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME):$(OSRC) 
	@$(CXX) $(CFLAGS) $(OSRC) -o $@
	@printf "ALL IS READY.\n"

%.o : %.cpp $(DFS)
	@$(CXX) $(CFLAGS) -c $<

clean:
	@rm -rf *.o
	@printf " - Object Files Removed.\n"

fclean:
	@rm -rf *.o $(NAME)

re:fclean all

.PHONY: all clean fclean re