#include "Karen.hpp"

std::string Karen::verbosity_strings[MAX_VERBOSITY_LEVEL] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
	"SWITCH"};

Karen::Karen()
{
	handler[0] = &Karen::debug;
	handler[1] = &Karen::info;
	handler[2] = &Karen::warning;
	handler[3] = &Karen::error;
	handler[4] = &Karen::nop;

	verbosity = -1;
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

void Karen::nop(void)
{
}

void Karen::complain(std::string const &level)
{
	int v = verbosity_from_string(level);

	if (v == -1)
	{
		error(); 
		exit(1);
	}

	if (v >= verbosity)
	{
		(*this.*handler[v])();
	}
}

void Karen::set_verbosity(std::string level)
{
	int v = verbosity_from_string(level);
	if (v == -1)
	{
		v = verbosity_from_string("SWITCH");
	}
	if (v == verbosity_from_string("SWITCH"))
	{
		std::cout << "[Karen probably complains, but who cares]" << std::endl;
	}
	verbosity = v;
}

int Karen::verbosity_from_string(std::string const &key)
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
