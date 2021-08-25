#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            if (abs(a - b) % 10 == 0)
            {
                cout << abs(a - b) / 10 << endl;
            }
            else
            {
                cout << (abs(a - b) / 10) + 1 << endl;
            }
        }
    }
}