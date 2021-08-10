#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int no_rotation = 0;
    int arr[5][5];
    int m, n;
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

            if (arr[i][j] == 1)
            {
                m = i;
                n = j;
                break;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (m > 2)
        {
            m--;
            no_rotation++;
        }
        if (m < 2)
        {
            m++;
            no_rotation++;
        }
        if (m == 2)
        {
            break;
        }
    }

    for (j = 0; j < 5; j++)
    {
        if (n > 2)
        {
            n--;
            no_rotation++;
        }
        if (n < 2)
        {
            n++;
            no_rotation++;
        }
        if (n == 2)
        {
            break;
        }
    }
    cout << no_rotation << endl;
}