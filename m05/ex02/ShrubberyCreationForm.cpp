#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>
#include <fstream>
#include <ostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target_) : 
        Form(target_ + " shrubbery form", 145, 137, target_)
{}

const char* ShrubberyCreationForm::ShrubberyCreationFailedException::what() const throw()
{
	return ("Exception: Shrubbery cannot be done!");
}

void ShrubberyCreationForm::do_execute(Bureaucrat const & executor) const
{
        std::ofstream shrubfile;
        try {
                shrubfile.open((target+"_shrubbery").c_str());
        } catch (std::exception &e) {
                std::cout << executor.getName() << "could not plant shrubs :" << e.what() <<std::endl;
                throw ShrubberyCreationForm::ShrubberyCreationFailedException();
        }

        shrubfile << "  /SHRUBBY ASCII TREES"<<std::endl;
        shrubfile << "----SHRUBBY ASCII TREES"<<std::endl;
        shrubfile << " \\__SHRUBBY ASCII TREES"<<std::endl;
        shrubfile.close();

}
