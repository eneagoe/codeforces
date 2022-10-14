#include <iostream>

using namespace std;

int main()
{
    int n, a, b, min = 0, capacity = 0;

    cin >> n;

    while (--n)
    {
        cin >> a;
        cin >> b;
        capacity -= a;
        capacity += b;
        if (capacity > min)
            min = capacity;
    }

    cout << min << endl;
}
