#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int n, i, total = 0, min = 0, minsum = 0;
    vector<unsigned int> coins;

    cin >> n;
    while (n--)
    {
        cin >> i;
        coins.push_back(i);
        total += i;
    }
    sort(coins.begin(), coins.end(), greater<unsigned int>());
    for (auto j: coins)
    {
        min++;
        minsum += j;
        if (minsum > total - minsum)
            break;
    }

    cout << min << endl;
}
