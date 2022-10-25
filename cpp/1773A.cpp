#include <iostream>

using namespace std;

int main(void)
{
    int t, i, j, k, n, a[1001];

    cin >> t;

    while(t--) {
        long long int s = 0;

        cin >> n >> k;

        for(i = 1; i <= n; i++)
            cin >> a[i];

        for(i = 1; i <= k; i++) {
            int m = a[i];

            for(j = 1; i + j * k <= n; j++)
                m = max(m, a[i + j * k]);

            s += m;
        }

        cout << s << '\n';
    }

    return 0;
}
