#include <vector>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>

template<class T>
typename T::iterator easyfind (T &base, int key){
        //https://en.cppreference.com/w/cpp/named_req/Container
        typename T::iterator ptr;
        for (ptr = base.begin(); ptr!=base.end(); ptr++) {
                std::cout << "searching for "<< key << ", looking at " << *ptr << std::endl;
                if (*ptr == key){
                        return ptr;
                }
        }
        return ptr;
}

int main(){
        std::vector<int> arr;
        arr.push_back(10);
        arr.push_back(12);
        arr.push_back(20);
        arr.push_back(35);
        arr.push_back(45);
        std::vector<int>::iterator result = easyfind(arr, 12);
        std::cout << "offset is " << result - arr.begin() << std::endl;
        std::cout << "result is " << *result << std::endl;
        std::cout << "at the start of the array: " << *arr.begin() << std::endl;
        return 0;

}
