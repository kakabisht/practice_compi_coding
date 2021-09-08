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
        int arr[2000];
        int no_eve = 0;
        int no_odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                no_eve++;
            else if (arr[i] % 2 != 0)
                no_odd++;
        }
        if ((no_odd % 2 != 0) || ((no_eve > 0) && (no_odd > 0)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}