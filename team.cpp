#include <iostream>
using namespace std;

int check(int ar[][3], int len)
{
    int correct = 0;
    for (int i = 0; i < len; i++)
    {
        int c = 0;
        for (int j = 0; j < 3; j++)
        {
            if (ar[i][j] == 1)
            {
                c++;
            }
        }
        if (c > 1)
        {
            correct++;
        }
    }
    return correct;
}

int main()
{
    int x;
    cin >> x;
    int arr[1000][3];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << check(arr, x);
}
