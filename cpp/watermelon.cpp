#include <iostream>

int main()
{
    unsigned int i;
    std::cin >> i;
    if (i != 2 && !(i % 2))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
}
