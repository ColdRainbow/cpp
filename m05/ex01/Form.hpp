#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_exec;
		Form();
	
	public:
		Form(const std::string name, const int grade_sign, const int grade_exec);
		Form(Form const &other);
		Form& operator=(const Form& other);
		~Form();

		std::string getName() const;
		int getGradeSign() const;
		bool getSign() const;
		void beSigned(Bureaucrat& bureaucrat);

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
};

std::ostream& operator << (std::ostream& out, const Form& other);
