#pragma once
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		const std::string name;
		int grade;
	
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void incrementGrade();
		void decrementGrade();

		void signForm(Form& form);
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& other);
