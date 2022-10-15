#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, eights = 0;
    string digits;

    cin >> n;

    cin >> digits;

    for(auto &ch: digits)
        if(ch == '8')
            eights++;

    cout << min(eights, n / 11);

    return 0;
}
