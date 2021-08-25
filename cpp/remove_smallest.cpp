#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int count = 0;
        cin >> n;
        int arr[100];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
        for (int j = 1; j < n; j++)
        {
            if (abs(arr[j] - arr[j - 1]) > 1)
            {
                count++;
            }
        }
        if ((n == 1) || (count == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}