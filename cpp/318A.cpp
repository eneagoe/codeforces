#include <iostream>

using namespace std;

int main()
{
    uint64_t n, k;

    cin >> n;
    cin >> k;

    if (n % 2)
    {
        if (k <= (n + 1) / 2)
            cout << 2 * k - 1;
        else
            cout << 2 * k - n - 1;
    }
    else
    {
        if (k <= n / 2)
            cout << 2 * k - 1;
        else
            cout << 2 * k - n;
    }
    cout << endl;
}
