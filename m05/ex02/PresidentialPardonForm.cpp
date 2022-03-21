#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const & target_) : 
        Form(target_ + " pardon form", 25, 5, target_)
{}


void PresidentialPardonForm::do_execute(Bureaucrat const & executor) const
{
        std::cout << executor.getName() << " announces that " << target << "has been pardoned by Zaphod Beeblebrox!" << std::endl;

}
