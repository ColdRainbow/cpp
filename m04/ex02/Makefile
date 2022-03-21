NAME = animal 

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp \
		main.cpp 

H = Animal.hpp \
	Cat.hpp \
	Dog.hpp \
	Brain.hpp

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
