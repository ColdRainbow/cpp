#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <ostream>

int main(int argc, char ** argv){
        Point a(0.0,0.0);
        Point b(1.0,0.0);
        Point c(0.0,1.0);
        Point d(0.1,0.1);

        std::cout << "point is in triangle? " << bsp(a, b, c, d) << std::endl;
        Point new_d(-0.1,0.1);
        std::cout << "new point is in triangle? " << bsp(a, b, c, new_d) << std::endl;

        return 0;
}

