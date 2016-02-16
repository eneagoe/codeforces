#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;

    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    for (char& c: word)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
            cout << "." << c;
    }
    cout << endl;
}
