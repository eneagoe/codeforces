#include <iostream>
#include <vector>

#define LIMIT 1000

using namespace std;

int main()
{
    unsigned int digits[] = {4, 7};
    vector<unsigned int> crt;
    vector<unsigned int> lucky;
    unsigned int n;

    for (auto i: digits)
    {
        crt.push_back(i);
        lucky.push_back(i);
    }

    cin >> n;

    while (1)
    {
        for (auto i: crt)
            for (auto j: digits)
            {
                auto k = i * 10 + j;
                crt.push_back(k);
                lucky.push_back(k);
            }
        if (crt.back() >= LIMIT)
            break;
    }

    for (auto i: lucky)
    {
        if (n % i == 0)
        {
            cout << "YES" << endl;
            exit(0);
        }
    }

    cout << "NO" << endl;
}
