#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    uint64_t a, b, total = 0;

    cin >> a;
    cin >> b;

    while (1)
    {
        if (a % b)
        {
            if (a / b > 1)
            {
                total += a / b;
                a -= b * (a / b);
                if (a < b)
                    swap(a, b);
            }
            else
            {
                total += 1;
                a -= b;
                swap(a, b);
            }
        }
        else
        {
            total += a / b;
            break;
        }
    }

    cout << total << endl;
}
