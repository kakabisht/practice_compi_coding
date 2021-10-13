// Write a method that moves all zeros in an array to its end.
// You should maintain the order of all other elements.
// zerosToEnd([1, 0, 2, 0, 4, 0])

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    // int brr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }

    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i];
}

// Expected time complexity : O(n), Actual : o(n)
// Expected space complexity : O(1) Actual : O(2n) or O(n)