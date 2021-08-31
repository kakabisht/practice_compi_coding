#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != arr[i] % 2)
            {
                if (arr[i] % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        if (odd != even)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << even << endl;
        }
        t--;
    }
}