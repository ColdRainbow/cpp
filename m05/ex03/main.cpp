#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>

int main()
{
	Bureaucrat Anton("Anton", 40);
        Bureaucrat Sergey("Sergey", 30);
        Bureaucrat Zaphod("Zaphod", 2); // BUT WHO IS THE FIRST ONE?
        Intern shyguy;

        Form* anton_rrf =  shyguy.makeForm("robotomy request","Anton");

        //Sergey wants to robotomize Anton
	std::cout << *anton_rrf << std::endl;
	std::cout << std::endl;

	try
	{
                Sergey.signForm(*anton_rrf);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
                Sergey.executeForm(*anton_rrf);
                Anton = Bureaucrat("DEAD ANTON, RIP",150);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

        Form* home_shrubform =  shyguy.makeForm("shrubbery creation","anton_home");
        //commemorative

        Sergey.signForm(*home_shrubform);
        Sergey.executeForm(*home_shrubform);

        Form* anton_ppf =  shyguy.makeForm("presidential pardon","Anton");
        Zaphod.signForm(*anton_ppf);
        Zaphod.executeForm(*anton_ppf);

        try {

                Form* anton_ppf =  shyguy.makeForm("impeachment","Zaphod");
        } catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}





        








/*
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
*/
}
