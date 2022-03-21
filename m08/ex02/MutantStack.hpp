#include <cstddef>
#include <iterator>
#include <stack>
#include <vector>

//the internal container of stack is protected.So we unfortunately cannot
//expose it from the child class or something.

template<class T>
class MutantStack: public std::stack<T, std::vector<T> > {
        private:
                // std::vector<T> container;
                // std::stack<T, std::vector<T>> stack;
                // void sync_stack();
                // void sync_container();

        public:

                typedef typename std::vector<T>::iterator iterator;
                typedef  T value_type;

                //MutantStack();
                //~MutantStack();
                // bool empty() const;
                // size_t size() const;
                // value_type& top() const;
                // void push (const value_type& val);
                // void pop();

                iterator begin();
                iterator end();
                //int container_length();
};

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
        return this->c.begin();
}

template<class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
        return this->c.end();
}

// template<class T>
// bool MutantStack<T>::empty() const
// {
//         return stack.empty();
// }

// template<class T>
// size_t MutantStack<T>::size() const
// {
//         return stack.size();
// }

// template<class T>
// void MutantStack<T>::push (const value_type& val)
// {
//         return stack.size();
// }

// template<class T>
// void MutantStack<T>::pop()
// {
//         stack.pop();
// }

// template<class T>
// int MutantStack<T>::container_length()
// {
//         return container.size();
// }

// template<class T>
// void MutantStack<T>::sync_stack()
// {
//         stack
// }

// //template<class T>
// //MutantStack<T>::MutantStack() : container(std::vector<T>()), std::stack<T, std::vector<T>>(container)
// //{}

