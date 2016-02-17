#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int n;
    int x = 0;
    string word;

    cin >> n;
    while (n--)
    {
        cin >> word;
        if (word.find("++") != string::npos)
            x++;
        else
            if (word.find("--") != string::npos)
                x--;

    }

    cout << x << endl;
}
