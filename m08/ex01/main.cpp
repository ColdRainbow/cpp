#include <iostream>
#include "Span.hpp"
#include <vector>

int main()
{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span sp_from_range = Span (6);
        std::vector<int> loader;
        loader.push_back(5);
        loader.push_back(7);
        loader.push_back(8);
        loader.push_back(9);
        loader.push_back(12);
        sp_from_range.addIteratorRange(loader.begin(), loader.end());
        std::cout << sp_from_range.shortestSpan() << std::endl;
        std::cout << sp_from_range.longestSpan() << std::endl;


        return 0;
}
