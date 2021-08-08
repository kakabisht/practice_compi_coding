#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int no_rotation = 0;
    int arr[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {

            if ((arr[i][j] == 1) && (i > 2))
            {
                swap(arr[i][j], arr[i - 1][j]);
                no_rotation++;
            }
            if ((arr[i][j] == 1) && (j > 2))
            {
                swap(arr[i][j], arr[i][j - 1]);
                no_rotation++;
            }
            if ((arr[i][j] == 1) && (i < 2))
            {
                swap(arr[i][j], arr[i + 1][j]);
                no_rotation++;
            }
            if ((arr[i][j] == 1) && (j < 2))
            {
                swap(arr[i][j], arr[i][j + 1]);
                no_rotation++;
            }
            if ((arr[i][j] == 1) && (i == 2) && (j == 2))
            {
                continue;
            }
        }
    }
    cout << no_rotation;
}