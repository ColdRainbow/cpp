#include <vector>

class Span 
{
        private:
                std::vector<int> vec;
                const unsigned int cap;
        public:
                Span(unsigned int N);
                ~Span();
                void addNumber(int n);
                int shortestSpan();
                int longestSpan();

                template<class ForwardIterator> 
                void addIteratorRange (ForwardIterator begin, ForwardIterator end);
};


// Having definition here is neccessary because of the caveat in using in-class template functions.
// see https://stackoverflow.com/questions/972152/how-to-create-a-template-function-within-a-class-c
// It does not compile otherwise.

template<class ForwardIterator> 
void Span::addIteratorRange (ForwardIterator begin, ForwardIterator end)
{
        if (end - begin > cap - vec.size()){
                        throw "cannot add so much to the span";
                        }
        for (ForwardIterator it = begin; it != end; it++){
                addNumber(*it);
        }
}

