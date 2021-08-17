#include <iostream>

using namespace std;

int main()
{
    long int n, i, j, counter = 0;
    cin >> n;
    long int a[100000];

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n;)
    {
        if (a[i] == 10)
        {
            for (j = i + 1; j < n; j++)
                if (a[j] != 10)
                    break;

            counter++;
            i = j;
        }
        else
        {
            for (j = i + 1; j < n; j++)
                if (a[j] != 1)
                    break;
            counter++;
            i = j;
        }
    }

    cout << counter << endl;

    return 0;
}