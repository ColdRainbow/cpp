#include "Span.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>

Span::Span(unsigned int N) : cap(N) 
{}

Span::~Span()
{
        vec.clear();
}


void Span::addNumber(int n)
{
        std::cout << "Adding " << n << std::endl;
        if (vec.size() >= cap) {
                throw "cannot add: span full";
        }
        vec.push_back(n);
}
int Span::shortestSpan()
{
        if (vec.size() < 2) {
                throw "too few numbers to find spans!";
        }
        std::vector<int> sorted = vec;
        std::sort(sorted.begin(), sorted.end());
        int previous = *sorted.begin();
        int span = INT_MAX;
        for (std::vector<int>::iterator it = sorted.begin()+1; it != sorted.end(); it++)
        {
                int new_span = *it - *(it-1);
                if (new_span < span) {
                        span = new_span;
                }
        }

        return span;
}
int Span::longestSpan()
{
        if (vec.size() < 2) {
                throw "too few numbers to find spans!";
        }
        int max = *std::max_element(vec.begin(), vec.end());
        int min = *std::min_element(vec.begin(), vec.end());
        return max - min;
}


