#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            cout << max(a * 2, b) * max(a * 2, b) << endl;
        }
        else
        {
            cout << max(b * 2, a) * max(b * 2, a) << endl;
        }

        t--;
    }
}