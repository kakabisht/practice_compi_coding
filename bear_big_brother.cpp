#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int no_years = 0;

    for (int i = 0; i < 100; i++)
    {
        if (a <= b)
        {
            a *= 3;
            b *= 2;
            no_years++;
        }

        else if (a > b)
        {
            cout << no_years << endl;
            break;
        }
    }
}