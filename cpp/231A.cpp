#include <iostream>

int main()
{
    unsigned int n, i, j, sum = 0, count = 0;

    std::cin >> n;
    while (n--)
    {
        for (j = 0; j < 3; j++)
        {
            std::cin >> i;
            sum += i;
        }
        if (sum >= 2)
            count++;
        sum = 0;
    }

    std::cout << count << std::endl;
}
