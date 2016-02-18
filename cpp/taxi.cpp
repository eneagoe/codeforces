#include <iostream>

using namespace std;

int main()
{
    unsigned long n, i, cabs = 0;
    long counts[4] = {};

    cin >> n;
    while (n--)
    {
        cin >> i;
        ++counts[i - 1];
    }

    cabs = counts[3] + counts[2];
    counts[0] -= counts[2];
    if (counts[0] < 0)
        counts[0] = 0;
    cabs += counts[1]/2;
    cabs += counts[1] % 2;
    counts[0] -= (counts[1] % 2) * 2;
    if (counts[0] > 0) {
        if (counts[0] % 4)
            cabs += counts[0] / 4 + 1;
        else
            cabs += counts[0] / 4;
    }

    cout << cabs << endl;
}
