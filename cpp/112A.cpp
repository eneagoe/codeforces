#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string first, second;

    cin >> first;
    cin >> second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    int cmp = first.compare(second);
    if (cmp > 0)
        cmp = 1;
    else
        if (cmp < 0)
            cmp = -1;

    cout << cmp << endl;
}
