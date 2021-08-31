#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[50];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int min = arr[1] - arr[0];
        for (int i = 1; i < n - 1; i++)
        {
            int temp = abs(arr[i + 1] - arr[i]);
            if (temp < min)
            {
                min = temp;
            }
        }
        cout << abs(min) << endl;
        t--;
    }
}
