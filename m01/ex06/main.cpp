#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	if (argc != 2)
	{
		karen.complain("ERROR");
		return (1);
	}
	std::string level_string(argv[1]);
	karen.set_verbosity(level_string);
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}
