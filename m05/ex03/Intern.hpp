#pragma once
#include "Form.hpp"
#include <string>


class Intern
{
        private:
                Form** samples_array;
                int samples_array_size;

        public:
                Intern();
                ~Intern();
                Form* makeForm(std::string const &type, std::string const &target);

		class FormNotKnownException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
