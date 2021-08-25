#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            if (count == 0)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
                count++;
            }
            else if (count != 0)
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                count--;
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
}