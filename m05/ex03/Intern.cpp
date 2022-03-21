#include "Intern.hpp"
#include "Form.hpp"

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
// add new forms here

#include <cstddef>
#include <iostream>


Intern::Intern()
{
        Form* sa[] = {
                new RobotomyRequestForm(""), 
                new PresidentialPardonForm(""),
                new ShrubberyCreationForm(""),
                // add new forms here
        };
        samples_array_size = sizeof(sa)/sizeof(sa[0]);

        //saving things into Intern. Yes, stupid.
        samples_array = new Form* [samples_array_size];
        for (int i = 0 ; i < samples_array_size; i++) {
                samples_array[i] = sa [i];
        }

}

Intern::~Intern(){
        for (int i = 0 ; i < samples_array_size; i++) {
                delete samples_array[i];
        }

}

const char* Intern::FormNotKnownException::what() const throw()
{
	return ("Exception: Intern does not know this blank!" );
}

Form* Intern::makeForm(std::string const &type, std::string const &target)
{
        Form* new_form = NULL;
        //std::cout << "size of sample arr = " << size << std::endl;
        for (int i = 0 ; i < samples_array_size; i++) {
                if (samples_array[i]->getName() == type){
                        std::cout << "found!" << std::endl;
                        return samples_array[i]->clone(target);
                }
        }

        if (new_form == NULL) {

                std::cout << "Intern does not know how to fill " << type << std::endl;
                throw Intern::FormNotKnownException();
        }

        
        return new_form;

}
