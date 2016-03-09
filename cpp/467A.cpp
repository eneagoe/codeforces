#include <iostream>

using namespace std;

int main()
{
    unsigned int n, p, q, available = 0;

    cin >> n;

    while (n--)
    {
        cin >> p;
        cin >> q;
        if (p + 2 <= q)
            available++;
    }

    cout << available << endl;
}
