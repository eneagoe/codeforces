#include <iostream>

#define N 1000000

using namespace std;

int v[N];

int main(void)
{
    int n;

    cin >> n;

    for(auto i = 0; i < n; i++)
        cin >> v[i];

    for(auto i = n - 1; i >= 0; i--)
        cout << v[i] << ' ';

    return 0;
}
