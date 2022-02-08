#include "Karen.hpp"

std::string Karen::verbosity_strings[MAX_VERBOSITY_LEVEL] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"};

Karen::Karen()
{
	handler[0] = &Karen::debug;
	handler[1] = &Karen::info;
	handler[2] = &Karen::warning;
	handler[3] = &Karen::error;
}

void Karen::debug(void)
{
	std::cout << "Debug: I love having extra bacon. I really do!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "Info: You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free." << std::endl;
}
void Karen::error(void)
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	int verbosity = verbosity_from_string(level);
	if (verbosity == -1)
	{
		error();
		exit(1);
	}
	(*this.*handler[verbosity])();
}

int Karen::verbosity_from_string(std::string key)
{
	for (int i = 0; i <= MAX_VERBOSITY_LEVEL - 1; i++)
	{
		if (this->verbosity_strings[i] == key)
		{
			return (i);
		}
	}
	return (-1);
}
