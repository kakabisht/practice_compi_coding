
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, n;
        cin >> a >> b >> c >> n;
        long long int sum = a + b + c;
        long long int ma = max(max(a, b), c);
        long long int diffsum = 3 * ma - sum;
        long long int m2 = n - diffsum;
        if (m2 < 0)
            cout << "NO" << '\n';
        else
        {
            if (m2 % 3 == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}
