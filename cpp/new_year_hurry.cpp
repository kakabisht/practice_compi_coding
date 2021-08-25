#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int count = 0;
    cin >> n >> k;
    int res = 240 - k, sum = 0, c = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;

        if (sum > res)
            break;

        c = c + 1;
    }

    cout << c << endl;
}