NAME = scav 

CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Bureaucrat.cpp \
		Form.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp \
		main.cpp 

H = Bureaucrat.hpp \
	Form.hpp \
	PresidentialPardonForm.hpp \
	RobotomyRequestForm.hpp \
	ShrubberyCreationForm.hpp \
	Intern.hpp

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
