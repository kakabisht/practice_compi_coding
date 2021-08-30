#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    int sum = 0;
    sum = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);
    cout << sum << endl;
}