#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

// FIXME: this seems overly complicated, there must be a simpler way in C++
// to join a vector of strings
int main()
{
    string c;
    vector<string> digits;

    cin >> c;

    stringstream ss(c);

    while (getline(ss, c, '+'))
        digits.push_back(c);

    sort(digits.begin(), digits.end());

    auto lastElement = digits.end();
    --lastElement;

    for (auto it = digits.begin(); it != digits.end(); it++)
    {
        cout << *it;
        if (it != lastElement)
            cout << '+';
    }

    cout << endl;
}
