#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[16][16]{};

    int i, j;
    int counter = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = 1;
        }
    }

    // row based approach
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if ((arr[i][j] == 1) && (arr[i][j + 1] == 1))
            {
                arr[i][j] = 2;
                arr[i][j + 1] = 2;
                counter++;
            }
        }
    }
    // column based approach
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if ((arr[i][j] == 1) && (arr[i + 1][j] == 1))
            {
                arr[i][j] = 2;
                arr[i + 1][j] = 2;
                counter++;
            }
        }
    }
    cout << counter << endl;
}