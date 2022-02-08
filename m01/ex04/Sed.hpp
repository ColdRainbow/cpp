#ifndef __SED_H__
# define __SED_H__

#include <exception>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void fill_buffer_1_byte(std::string &buffer, std::ifstream &stream);
void flush(std::string &buffer, std::ifstream &instream, std::ofstream &outstream);
void try_fill_buffer(std::string &buffer,
					 std::ifstream &instream,
					 std::ofstream &outstream,
					 uint target_size);

#endif