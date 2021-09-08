#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum_1 = 0;
    int sum_2 = 0;
    int l = 0;
    int r = n - 1;
    int i = 0;
    while (l <= r)
    {
        if (i % 2 == 0)
        {
            if (arr[l] > arr[r])
            {
                sum_1 += arr[l];
                l++;
            }
            else
            {
                sum_1 += arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                sum_2 += arr[l];
                l++;
            }
            else
            {
                sum_2 += arr[r];
                r--;
            }
        }
        i++;
    }
    cout << sum_1 << " " << sum_2 << endl;
}