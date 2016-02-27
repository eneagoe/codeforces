#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string in;

    cin >> in;

    sort(in.begin(), in.end());
    in.erase(unique(in.begin(), in.end()), in.end());

    if (in.length() % 2)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
}
