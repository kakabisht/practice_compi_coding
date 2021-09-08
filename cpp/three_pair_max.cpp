#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 0, b = 0, c = 0;
        int count = 0;
        if ((x == y) && (y == z))
        {
            count++;
        }
        if ((x == y) && (x > z))
        {
            a = x;
            b = min(y, z);
            c = 1;
        }
        if ((y == z) && (y > x))
        {
            c = y;
            b = min(z, x);
            a = 1;
        }
        if ((z == x) && (x > y))
        {
            b = z;
            c = min(x, y);
            a = 1;
        }

        if ((count == 0) && (a > 0) && (b > 0) && (c > 0))
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else if (count > 0)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}