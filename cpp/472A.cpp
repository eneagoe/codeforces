#include <iostream>

using namespace std;

int main()
{
    uint64_t n, first, second;

    cin >> n;

    if ((n - 4) % 3 == 0)
    {
        first = 4;
        second = n - 4;
    }
    else if ((n - 6) % 3 == 0)
    {
        first = 6;
        second = n - 6;
    }
    else
    {
        first = 8;
        second = n - 8;
    }

    cout << first << " " << second << endl;
}
