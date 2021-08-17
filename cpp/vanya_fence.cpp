#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int h = 0;
    cin >> h;
    int wid = 0;
    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            wid++;
        }
        while (arr[i] > h)
        {
            wid += 2;
            arr[i] -= h;
            break;
        }
    }
    cout << wid << endl;
}
