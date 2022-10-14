#include <iostream>
#include <string>

using namespace std;

int main()
{
    string players;
    int streak = 0;
    char crt_char = 'X';

    cin >> players;
    for (char& c: players)
    {
        if (crt_char != c)
        {
            streak = 1;
            crt_char = c;
        }
        else
            streak++;

        if (streak == 7) {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
}
