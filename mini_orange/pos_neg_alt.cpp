#include <iostream>

#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > 0)
                {
                    int temp = arr[j];
                    arr[j] = arr[i + 1];
                    arr[i + 1] = temp;
                    break;
                }
            }
        }
        if (arr[i] > 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < 0)
                {
                    int temp = arr[j];
                    arr[j] = arr[i + 1];
                    arr[i + 1] = temp;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}