#pragma once
#include "Form.hpp"
#include <string>


class PresidentialPardonForm : public Form
{
        //private:
        //        const std::string target;
        protected:
                void do_execute(Bureaucrat const & executor) const;
        public:
                PresidentialPardonForm(std::string const &target);

};

