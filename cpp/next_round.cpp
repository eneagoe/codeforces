#include <iostream>

using namespace std;

int main()
{
    int n, k, i, score, kscore, qualified = 0;

    cin >> n;
    cin >> k;

    for (i = 0; i < k; i++) {
        cin >> score;
        if (score)
            qualified++;
    }

    kscore = score;

    while (i < n)
    {
        cin >> score;
        if (score >= kscore && score)
            qualified++;
        i++;
    }

    cout << qualified << endl;
}
