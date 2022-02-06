#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	std::string com;
	while (true)
	{
		std::cout << "Please, enter a command" << std::endl;
		std::cin >> com;
		if (com == "EXIT")
			return (0);
		if (com == "ADD" || com == "SEARCH")
		{
			Contact c;
			if (com == "ADD")
			{
				std::cout << "Enter a first name" << std::endl;
				std::cin >> c.first_name_;
				std::cout << "Enter a last name" << std::endl;
				std::cin >> c.last_name_;
				std::cout << "Enter a nickname" << std::endl;
				std::cin >> c.nickname_;
				std::cout << "Enter a phone number" << std::endl;
				std::cin >> c.phone_number_;
				std::cout << "Enter a darkest secret" << std::endl;
				std::cin >> c.darkest_secret_;
				pb.AddContact(c);
			}
			if (com == "SEARCH")
				pb.SearchContact();
		}
	}
}


