NAME = diamond 

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
		main.cpp 

H = ClapTrap.hpp \
	ScavTrap.hpp \
	FragTrap.hpp \
	DiamondTrap.hpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CCFLAGS) $(OBJ) -o $(NAME) 
	@echo "--------------------------------"
	@echo "${NAME} compiled"
	@echo "--------------------------------"

%.o : %.cpp $(H)
	$(CC) ${FLAGS} -o $@ -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
