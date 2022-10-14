#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;

    cin >> word;
    if (all_of(++word.begin(), word.end(), ::isupper))
    {
        for (char& c: word)
        {
            if (islower(c))
                cout << (char)toupper(c);
            else
                cout << (char)tolower(c);
        }
    }
    else
        cout << word;
    cout << endl;
}
