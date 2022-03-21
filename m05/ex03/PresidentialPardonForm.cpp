#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const & target_) : 
        Form("presidential pardon", 25, 5, target_)
{}

PresidentialPardonForm* PresidentialPardonForm::clone(std::string const & target) const
{ return new PresidentialPardonForm(target);
}

void PresidentialPardonForm::do_execute(Bureaucrat const & executor) const
{
        std::cout << executor.getName() << " announces that " << target << "has been pardoned by Zaphod Beeblebrox!" << std::endl;

}
