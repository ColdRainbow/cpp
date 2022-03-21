#include "Conversion.hpp"

uintptr_t serialize(Data* ptr) {
	char *res = new char[sizeof(Data)];

	*reinterpret_cast<int*>(res) = ptr->a;
	*reinterpret_cast<double*>(res + sizeof(int)) = ptr->b;
	*reinterpret_cast<char*>(res + sizeof(int) + sizeof(double)) = ptr->c;

	return (reinterpret_cast<uintptr_t >(res));
}

Data* deserialize(uintptr_t raw) {
	Data *res = new Data;

	res->a = *reinterpret_cast<int*>(raw);
	res->b = *reinterpret_cast<double*>(reinterpret_cast<char *>(raw) + sizeof(int));
	res->c = *reinterpret_cast<char*>(reinterpret_cast<char *>(raw) + sizeof(int) + sizeof(double));

	return (res);
}

