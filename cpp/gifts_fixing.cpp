#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        long long int a[50];
        long long int b[50];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long int min_a = a[0];
        long long int min_b = b[0];
        long long int max_a = a[0];
        long long int max_b = b[0];
        for (int i = 0; i < n; i++)
        {
            if (b[i] < min_b)
            {
                min_b = b[i];
            }
            if (a[i] < min_a)
            {
                min_a = a[i];
            }
            if (b[i] > min_b)
            {
                max_b = b[i];
            }
            if (a[i] > min_a)
            {
                max_a = a[i];
            }
        }
        long long int limit = max(max_b, max_a);
        long long int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < limit; j++)
            {
                if ((a[i] > min_a) && (b[i] > min_b))
                {
                    a[i]--;
                    b[i]--;
                    count++;
                    continue;
                }
                if (a[i] > min_a)
                {
                    count += a[i] - min_a;
                    a[i] = min_a;
                }
                if (b[i] > min_b)
                {
                    count += b[i] - min_b;
                    b[i] = min_b;
                }
                else if ((a[i] == min_a) && (b[i] == min_b))
                {
                    break;
                }
            }
        }
        cout << count << endl;
        t--;
    }
}