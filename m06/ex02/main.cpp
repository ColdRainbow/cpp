#include "Type.hpp"

int main() {
	Base* obj = generate();

	identify(obj);
	identify(*obj);

	return 0;
}
