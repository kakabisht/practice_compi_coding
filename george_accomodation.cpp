#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr[100][2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] - arr[i][0] >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
}