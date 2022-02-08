#include "Sed.hpp"

void fill_buffer_1_byte(std::string &buffer, std::ifstream &stream)
{
	buffer += (char)stream.get();
}

void flush(std::string &buffer, std::ifstream &instream, std::ofstream &outstream)
{
	buffer.erase(buffer.size() - 1, 1);
	outstream << buffer;
	outstream.flush();
	outstream.close();
	instream.close();
}

void try_fill_buffer(std::string &buffer,
					 std::ifstream &instream,
					 std::ofstream &outstream,
					 uint target_size)
{
	for (uint i = 0; i < target_size - 1; i++)
	{
		fill_buffer_1_byte(buffer, instream);
	}
	if (buffer.size() < target_size - 1)
	{
		flush(buffer, instream, outstream);
		std::exit(0);
	}
}