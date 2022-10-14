#include <iostream>

using namespace std;

int main()
{
    unsigned int m, n, total = 0;

    cin >> m;
    cin >> n;

    if (m % 2 == 0 || n % 2 == 0)
    {
        total = n * m / 2;
    }
    else
    {
        total = n * (m / 2) + (n - 1) / 2;
    }

    cout << total << endl;
}
