#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        long long int diff = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            diff += pow(2, i);
        }
        cout << diff << endl;
        t--;
    }
}
