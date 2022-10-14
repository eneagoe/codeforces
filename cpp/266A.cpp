#include <iostream>

using namespace std;

int main()
{
    int n, removals = 0;
    char crt_char, prev_char = '\0';

    cin >> n;
    while (n--)
    {
        cin >> crt_char;
        removals += (crt_char == prev_char);
        prev_char = crt_char;
    }

    cout << removals << endl;
}
