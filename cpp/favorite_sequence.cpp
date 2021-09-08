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
        long long int arr[300];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            cout << arr[i] << " " << arr[n - i - 1] << " ";
        }
        if (n % 2 != 0)
            cout << arr[n / 2] << endl;
        else
            cout << endl;
    }
}