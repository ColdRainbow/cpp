#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Need 3 arguments!"
				  << "\n";
		return 1;
	}
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream file;

	try
	{
		file.open(filename.c_str());
	}
	catch (std::exception &e)
	{
		std::cout << "cannot open file!"
				  << "\n";
		return (1);
	}

	std::string output_path = filename + ".replace";
	std::ofstream output;

	try
	{
		output.open(output_path.c_str());
	}
	catch (std::exception &e)
	{
		std::cout << "cannot open file!"
				  << "\n";
		return (1);
	}

	std::string buffer;

	try_fill_buffer(buffer, file, output, s1.size());
	while (!file.eof())
	{
		fill_buffer_1_byte(buffer, file);
		if (buffer != s1)
		{
			output << buffer[0];
			buffer.erase(0, 1);
			output.flush();
		}
		else
		{
			std::cout << "found!"
					  << "\n";
			output << s2;
			output.flush();
			buffer.clear();
			try_fill_buffer(buffer, file, output, s1.size());
		}
	}
	flush(buffer, file, output);
	return (0);
}
