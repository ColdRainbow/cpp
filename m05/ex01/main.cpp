#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat Anton("Anton", 10);
	Form f01("Form 01", 5, 1);
	Form f02("Form 02", 20, 1);
	std::cout << f01 << std::endl;
	std::cout << std::endl;
	std::cout << f02 << std::endl;

	std::cout << std::endl;

	// Check sign high
	try
	{
		Form f03("Form 03", 0, 1);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	// Check sign low
	try
	{
		Form f04("Form 04", 151, 1);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	// Check exec high
	try
	{
		Form f05("Form 05", 0, 1);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	// Check exec low
	try
	{
		Form f06("Form 06", 151, 1);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	// cannot sign
	try
	{
		Anton.signForm(f01);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << f01 << std::endl;
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << f01 << std::endl;
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	// signed
	try
	{
		Anton.signForm(f02);
	}
	catch (Form::GradeTooHighException &ex)
	{
		std::cout << f02 << std::endl;
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cout << f02 << std::endl;
		std::cout << ex.what() << std::endl;
	}
	std::cout << f02 << std::endl;

	return (0);
}
