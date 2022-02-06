#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{
	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		Contact(const Contact &copy);
		Contact& operator= (const Contact& contact);

	public:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;

};
#endif

