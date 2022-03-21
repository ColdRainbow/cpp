#include "Bureaucrat.hpp"
#include <exception>

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	this->grade = other.grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception:: Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too low");
}

const char* Bureaucrat::ExecutuionFailedException::what() const throw()
{
	return ("Exception: Execution failed" );
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& other)
{
	out << other.getName() << ", bureaucrat grade ";
	out << other.getGrade() << "." << std::endl;
	return (out);
}

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	if (form.getSign() == true)
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because grade is too low." << std::endl;
		throw Form::GradeTooLowException();
	}
}

void Bureaucrat::executeForm(Form const & form)
{
        try {
                form.execute(*this);
                std::cout << getName() << " executed " << form.getName() << std::endl;
        } catch (std::exception &ex) // we do not know which errors can be here
        {
                std::cout << getName() << " failed to execute " << form.getName() << ": " << ex.what() << std::endl;
                throw Bureaucrat::ExecutuionFailedException();
        }
}
