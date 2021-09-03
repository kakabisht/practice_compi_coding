#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = 0;
    for (int i = 1; i < n; i++)
    {
        if (n < pow(i, 2))
        {
            size = i;
            break;
        }
    }
    int arr[10][10];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i >= j)
            {
                cin >> arr[i][j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (i >= j)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
