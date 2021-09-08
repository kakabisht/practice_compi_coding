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
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = i + 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}