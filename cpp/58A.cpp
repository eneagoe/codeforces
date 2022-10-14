#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    size_t pos = 0;
    string lookup = "hello";

    cin >> s;

    for (auto c: lookup)
    {
        pos = s.find(c, pos);
        if (pos == string::npos)
        {
            cout << "NO" << endl;
            exit(0);
        }
        pos++;
    }

    cout << "YES" << endl;
}
