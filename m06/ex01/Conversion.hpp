#pragma once
#include <iostream>

struct Data {
	int a;
	double b;
	char c;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
