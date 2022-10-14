#include <iostream>

using namespace std;

int main(void)
{
    long long int n, L, a, breaks = 0, prev = 0;

    cin >> n >> L >> a;

    for(auto i = 0; i < n; i++) {
        int ti, li;

        cin >> ti >> li;

        breaks += (ti - prev) / a;

        prev = ti + li;
    }
    breaks += (L - prev) / a;

    cout << breaks;

    return 0;
}
