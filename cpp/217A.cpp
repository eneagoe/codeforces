#include <iostream>

using namespace std;

int main()
{
    unsigned int y, a, b, c, d, solution;

    cin >> y;

    while (++y)
    {
        solution = y;
        d = solution % 10;
        solution /= 10;
        c = solution % 10;
        solution /= 10;
        if (d != c)
        {
            b = solution % 10;
            solution /= 10;
            if (c != b && b != d)
            {
                a = solution;
                if (a != b && a != c && a != d)
                {
                    cout << y << endl;
                    exit(0);
                }
            }
        }
    }
}
