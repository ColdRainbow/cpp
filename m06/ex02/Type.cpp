#include "Type.hpp"

Base* generate() {
	srand(std::time(0));

	int choice = rand() % 3;

	if (choice % 3 == 0) {
		std::cout << "A" << std::endl;
		return new A;
	} else if (choice % 3 == 1) {
		std::cout << "B" << std::endl;
		return new B;
	} else {
		std::cout << "C" << std::endl;
		return new C;
	}
}

void identify(Base* p) {

	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base& p) {

	if (dynamic_cast<A*>(&p)) {
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(&p)) {
		std::cout << "C" << std::endl;
		return;
	}
}

