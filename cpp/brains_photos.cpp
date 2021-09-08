#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char arr[100][100];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((arr[i][j] == 'C') || (arr[i][j] == 'M') || (arr[i][j] == 'Y'))
            {
                count++;
            }
        }
    }
    if (count == 0)
        cout << "#Black&White" << endl;
    else
        cout << "#Color" << endl;
}