#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n / 2; i += 2)
                cout << n - i << " " << n + i << " ";
            for (int i = 1; i <= n / 2; i += 2)
                cout << n - i << " " << n + i << " ";
            cout << endl;
        }
        else if (n % 2 == 0)
            cout << "NO" << endl;
    }
}
