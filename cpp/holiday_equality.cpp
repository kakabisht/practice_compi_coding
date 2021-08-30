#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[n - 1])
        {
            count += arr[n - 1] - arr[i];
        }
    }
    cout << count << endl;
}