#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{
	public:
		Contact() {}
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
		{
			first_name_ = first_name;
			last_name_ = last_name;
			nickname_ = nickname;
			phone_number_ = phone_number;
			darkest_secret_ = darkest_secret;
		}
		
		Contact(const Contact &copy)
		{
			first_name_ = copy.first_name_;
			last_name_ = copy.last_name_;
			nickname_ = copy.nickname_;
			phone_number_ = copy.phone_number_;
			darkest_secret_ = copy.darkest_secret_;
		}

		Contact& operator= (const Contact& contact)
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

	public:
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string darkest_secret_;

};

class PhoneBook
{
public:
    PhoneBook()
    {
        size_ = 0;
    }

    bool AddContact(Contact c)
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
    
    void SearchContact()
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
			int j;
			std::cin >> j;
			if (j < size_ && j >= 0)
			{
				std::cout << arr[j].first_name_ << std::endl;
				std::cout << arr[j].last_name_ << std::endl;
				std::cout << arr[j].nickname_ << std::endl;
				std::cout << arr[j].phone_number_ << std::endl;
				std::cout << arr[j].darkest_secret_ << std::endl;
			}
			else
				std::cout << "Wrong index. Please, enter an index in range from 0 to " << size_ - 1 << std::endl;
		}
	}

private:
	Contact arr[8];
	int size_;
};

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


