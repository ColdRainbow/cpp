#include "Form.hpp"

Form::Form(const std::string name, const int grade_sign, const int grade_exec): name(name), grade_sign(grade_sign), grade_exec(grade_exec), sign(false)
{
	if (this->grade_sign < 1 || this->grade_exec < 1)
		throw Form::GradeTooHighException();
	if (this->grade_sign > 150 || this->grade_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other): name(other.name), grade_sign(other.grade_sign), grade_exec(other.grade_exec), sign(other.sign) {} 

Form::~Form() {}

Form& Form::operator= (const Form& other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form exception: Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form exception: Grade too low");
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getGradeSign() const
{
	return (this->grade_sign);
}

bool Form::getSign() const
{
	return (this->sign);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSign())
		this->sign = true;
	else
	{
		this->sign = false;
	}
}

std::ostream& operator << (std::ostream& out, const Form& form)
{
	out << "*---------- State of the form ----------* " << std::endl << "Name: " << form.getName() << std::endl <<
	"Grade: " << form.getGradeSign() <<  std::endl << "Signed status: " << form.getSign();
	return (out);
}
