#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size_ = 0;
}

bool PhoneBook::AddContact(Contact c)
{
	if (c.first_name_.empty() || c.last_name_.empty() || c.nickname_.empty() || c.phone_number_.empty() || c.darkest_secret_.empty())
		return (false);
	if (size_ == 8)
	{
		arr[0] = c;
		return (true);
	}
	arr[size_] = c;
	size_++;
	return (true);
}

void PhoneBook::SearchContact()
{
	if (size_ == 0)
		std::cout << "There are no contacts. Add the first one and then try again" << std::endl;
	else
	{
		for (int i = 0; i < size_; i++)
		{
			std::cout << std::right << std::setw(10) << i << '|';
			if (arr[i].first_name_.length() > 10)
				std::cout << std::right << arr[i].first_name_.substr(0, 9) << '.' << '|';
			else
				std::cout << std::right << std::setw(10) << arr[i].first_name_ << '|';
			if (arr[i].last_name_.length()> 10)
				std::cout << std::right << arr[i].last_name_.substr(0, 9) << '.' << '|';
			else
				std::cout << std::right << std::setw(10) << arr[i].last_name_ << '|';
			if (arr[i].nickname_.length()> 10)
				std::cout << std::right << arr[i].nickname_.substr(0, 9) << '.' << std::endl;
			else
				std::cout << std::right << std::setw(10) << arr[i].nickname_ << std::endl;
		}
		std::cout << "Please, enter an index of the contact" << std::endl;
		std::string input;
		std::cin >> input;
		int j;
		try
		{
			j = std::stoi(input);
			if (j < size_ && j >= -1)
			{
				std::cout << arr[j].first_name_ << std::endl;
				std::cout << arr[j].last_name_ << std::endl;
				std::cout << arr[j].nickname_ << std::endl;
				std::cout << arr[j].phone_number_ << std::endl;
				std::cout << arr[j].darkest_secret_ << std::endl;
			}
			else
				std::cout << "Wrong index. Please, enter an index in range from -1 to " << size_ - 1 << std::endl;
		}
		catch (std::invalid_argument)
		{
			std::cout << "Wrong index. Please, enter an index in range from 0 to " << size_ - 1 << std::endl;
		}
	}
}

