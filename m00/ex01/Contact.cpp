#include "Contact.hpp"

Contact::Contact() {};
Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	first_name_ = first_name;
	last_name_ = last_name;
	nickname_ = nickname;
	phone_number_ = phone_number;
	darkest_secret_ = darkest_secret;
}

Contact::Contact(const Contact &copy)
{
	first_name_ = copy.first_name_;
	last_name_ = copy.last_name_;
	nickname_ = copy.nickname_;
	phone_number_ = copy.phone_number_;
	darkest_secret_ = copy.darkest_secret_;
}

Contact& Contact::operator= (const Contact& contact)
{
	if (this != &contact)
	{
		first_name_ = contact.first_name_;
		last_name_ = contact.last_name_;
		nickname_ = contact.nickname_;
		phone_number_ = contact.phone_number_;
		darkest_secret_ = contact.darkest_secret_;
	}
	return (*this);
}

