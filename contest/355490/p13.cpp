#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
    long long int n, p = LLONG_MAX;

    cin >> n;

    for(long long int i = 1; i * i <= n; i++) {
        if(n % i == 0)
            if(p > i + n / i)
                p = i + n / i;
    }

    cout << 2LL * p;

    return 0;
}
