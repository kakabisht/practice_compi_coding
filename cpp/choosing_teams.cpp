#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[2000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (k + arr[i] <= 5)
        {
            count++;
        }
    }
    cout << count / 3 << endl;
}