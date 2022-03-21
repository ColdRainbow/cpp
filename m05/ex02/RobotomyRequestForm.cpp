#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <ctime>
#include <sys/time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target_) : 
        Form(target_ + " robotomy request form", 72, 45, target_)
{}

const char* RobotomyRequestForm::RobotomyFailedException::what() const throw()
{
	return ("Robotomy exception: Drill broke!");
}

void RobotomyRequestForm::do_execute(Bureaucrat const & executor) const
{
        struct timeval time_now;
        gettimeofday(&time_now, NULL);
        time_t msecs_time = time_now.tv_usec;

        std::cout << "*drilling noises*" << std::endl;
        if (msecs_time % 2){

                std::cout << target << " successfully robotomized!" << std::endl;
        }else{
                throw RobotomyRequestForm::RobotomyFailedException();
        }

}
