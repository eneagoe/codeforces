#include <iostream>

using namespace std;

int main()
{
    uint64_t k, l, m, n, d, total = 0;

    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    for (auto i = 1; i <= d; i++)
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            total += 1;

    cout << total << endl;
}
