#include <iostream>

using namespace std;

int main()
{
    int n, s;
    bool hard = 0;

    cin >> n;

    for (auto i = 0; i < n; i ++) {
        cin >> s;
        if (s) {
            hard = 1;
            break;
        }
    }
    if (hard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}