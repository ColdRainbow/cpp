#pragma once
#include "Form.hpp"
#include <string>


class RobotomyRequestForm : public Form
{
        //private:
        //        const std::string target;
        protected:
                void do_execute(Bureaucrat const & executor) const;
        public:
                RobotomyRequestForm(std::string const &target);

		class RobotomyFailedException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

