#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if ((arr[0] * arr[1]) > (arr[n - 2] * arr[n - 3]))
        cout << arr[0] * arr[1] * arr[n - 1] << endl;
    else if ((arr[0] * arr[1]) < (arr[n - 2] * arr[n - 3]))
        cout << arr[n - 2] * arr[n - 3] * arr[n - 1] << endl;
}