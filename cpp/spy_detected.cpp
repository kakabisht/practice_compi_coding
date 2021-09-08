#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((i == 0) && (arr[i] != arr[i + 1]) && (arr[i] != arr[i + 2]))
            {
                cout << i + 1 << endl;
                break;
            }
            else if ((arr[i] != arr[i - 1]) && (arr[i] != arr[i + 1]) && (i != 0))
            {
                cout << i + 1 << endl;
                break;
            }
        }
        t--;
    }
}