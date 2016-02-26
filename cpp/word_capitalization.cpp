#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;

    cin >> in;
    in.front() = toupper(in.front());
    cout << in << endl;
}
