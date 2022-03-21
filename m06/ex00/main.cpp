#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cfloat>

int num_char_str(std::string str, char c)
{
	int res = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == c)
			res++;
	}
	return (res);
}

void check_arg(char *argv)
{
	std::string arg = argv;

	if (arg == "nanf" || arg == "-inff" || arg == "+inff"|| arg == "nan" ||
	arg == "-inf" || arg == "+inf" || arg == "-nan" || arg == "+nan" ||
	arg == "inf" || arg == "inff" || arg == "-nanf" || arg == "+nanf")
		return ;
	for (int i = 0; arg[i]; i++)
	{
		if ((((arg[i] >= 32 && arg[i] <= 47) || (arg[i] >= 58 && arg[i] <= 126)) && (arg[i] != '.' && arg[i] != 'f' && arg[i] != '-')) ||
		arg[0] == '.' || arg[0] == 'f' || (num_char_str(arg, '.') > 1 || num_char_str(arg, 'f') > 1 || arg[i] > 127 || arg[i] < 0 ||
		(arg[i] == 'f' && i < (int)arg.size() - 1) || (num_char_str(arg, 'f') == 1 && num_char_str(arg, '.') == 0)) || num_char_str(arg, '-') > 1 ||
		(arg[0] == '-' && (int)arg.size() == 1))
		{
			std::cout << "Error: invalide argument" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

void converter(char *argv)
{
	double value;
	std::string arg = argv;

	value = std::atof(argv);

	// double
	double res_d = value;
	if (res_d - static_cast<int>(value) == 0)
			std::cout << "double: " << res_d << ".0" << std::endl;
	else if (value > std::numeric_limits<double>::max() &&
	arg != "nanf" && arg != "-inff" && arg != "+inff" && arg != "nan" && arg != "-inf" && arg != "+inf" &&
	arg != "-nan" && arg != "+nan" && arg != "inf" && arg != "inff" && arg != "-nanf" && arg != "+nanf")
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << res_d << std::endl;

	// float
	float res_f = static_cast<float>(value);
	if (res_f - static_cast<int>(value) == 0)
			std::cout << "float: " << res_f << ".0f" << std::endl;
	else if (value > std::numeric_limits<float>::max() &&
	arg != "nanf" && arg != "-inff" && arg != "+inff" && arg != "nan" && arg != "-inf" && arg != "+inf" &&
	arg != "-nan" && arg != "+nan" && arg != "inf" && arg != "inff" && arg != "-nanf" && arg != "+nanf")
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << res_f << "f" << std::endl;

	// int
	int res_i  = static_cast<int>(value);
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min()
	|| arg == "nanf" || arg == "-inff" || arg == "+inff"|| arg == "nan" || arg == "-inf" ||
	arg == "+inf" || arg == "-nan" || arg == "+nan" || arg == "inf" || arg == "inff" ||
	arg == "-nanf" || arg == "+nanf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << res_i << std::endl;

	// char
	char res_c = static_cast<char>(value);
	if (value >= 0 && value < 32)
		std::cout << "char: Non displayable" << std::endl;
	else if ((value >= 32 && value <= 126) && arg != "nanf" && arg != "-inff" && arg != "+inff" &&
	arg != "nan" && arg != "-inf" && arg != "+inf" && arg != "-nan" && arg != "+nan" && arg != "inf" &&
	arg != "inff" && arg != "-nanf" && arg != "+nanf")
		std::cout << "char: " << "'" << res_c << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	check_arg(argv[1]);
	converter(argv[1]);
}

