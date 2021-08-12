#include <iostream>

using namespace std;

int main()
{

    int ki, n, w;
    cin >> ki >> n >> w;

    int borrow = 0;

    for (int i = 1; i <= w; i++)
    {
        int k = i * ki;
        if (k <= n)
        {
            n = n - k;
        }
        else if (k > n)
        {
            if (n > 0)
            {
                borrow = k - n;
                n = 0;
            }
            else if (n == 0)
            {
                borrow = borrow + k;
            }
        }
    }

    cout << borrow << endl;
    return 0;
}