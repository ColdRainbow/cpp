#pragma once
#include "Form.hpp"
#include <string>


class ShrubberyCreationForm : public Form
{
        //private:
        //        const std::string target;
        protected:
                void do_execute(Bureaucrat const & executor) const;
        public:
                ShrubberyCreationForm(std::string const &target);
                ShrubberyCreationForm* clone(std::string const & target) const;

		class ShrubberyCreationFailedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

