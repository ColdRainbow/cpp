#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    j = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    std::string s(argv[1]);
    while (i < argc)
    {
        std::string s(argv[i]);
        for (int j = 0; j < s.size(); j++)
            std::cout << (char)std::toupper(s[j]);
        std::cout << ' ';
        i++;
    }
    std::cout << std::endl;
    return (0);
}
    

