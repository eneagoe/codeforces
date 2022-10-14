#include <iostream>

#define N 1000000

using namespace std;

long long int v[N];

int main(void)
{
    long long int n, x, a, b;

    cin >> n >> v[0];

    for(auto i = 1; i < n; i++) {
        cin >> x;

        v[i] = v[i - 1] + x;
    }

    cin >> a >> b;

    if(a == 0)
        cout << v[b];
    else
        cout << v[b] - v[a - 1];

    return 0;
}
