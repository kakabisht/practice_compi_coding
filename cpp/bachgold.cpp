#include <iostream>

using namespace std;

int main()
{
    long long int n, d, r;
    cin >> n;
    if (n % 2 == 0)
    {
        d = n / 2;
        cout << d << endl;
        for (int i = 1; i <= d; i++)
        {
            cout << "2 ";
        }
    }
    else
    {
        r = (n - 3);
        d = (r / 2);
        cout << d + 1 << endl;
        for (int i = 1; i <= d; i++)
        {
            cout << "2 ";
        }
        cout << "3";
    }
    cout << endl;
}
