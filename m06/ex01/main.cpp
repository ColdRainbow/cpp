#include "Conversion.hpp"

int main () {

	Data* obj = new Data;
	obj->a = 10;
	obj->b = 1.0;
	obj->c = 'a';

	std::cout << "Before deserialization: " << std::endl;
	std::cout << "int: " << obj->a << std::endl;
	std::cout << "double: " << obj->b << std::endl;
	std::cout << "char: " << obj->c << std::endl;
	std::cout << "-----------------------------" << std::endl;

	uintptr_t ptr = serialize(obj);
	Data* deserialized_obj = deserialize(ptr);

	std::cout << "Result of deserialization: " << std::endl;
	std::cout << "int: " << deserialized_obj->a << std::endl;
	std::cout << "double: " << deserialized_obj->b << std::endl;
	std::cout << "char: " << deserialized_obj->c << std::endl;

	return 0;
}
