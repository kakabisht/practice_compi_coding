#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int ar1[30];
        int ar2[30];
        for (int i = 0; i < n; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        sort(ar1, ar1 + n);
        sort(ar2, ar2 + n);
        for (int i = 0; i < k; i++)
        {
            if (ar1[i] < ar2[n - (1 + i)])
            {
                int temp = ar2[n - (1 + i)];
                ar2[n - (1 + i)] = ar1[i];
                ar1[i] = temp;
            }
        }
        long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ar1[i];
        }
        cout << sum << endl;
        t--;
    }
}