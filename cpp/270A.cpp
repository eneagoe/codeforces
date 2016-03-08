#include <iostream>

using namespace std;

int main()
{
    unsigned int t, a;

    cin >> t;

    while(t--)
    {
        cin >> a;
        if (360 % (180 - a))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
