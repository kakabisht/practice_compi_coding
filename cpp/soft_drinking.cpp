#include <iostream>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int count = 0;

    int amt = k * l;
    int lc = c * d;
    int sal = p;
    for (int i = 0; i < 1000; i++)
    {
        if ((amt >= nl) && (lc >= 1) && (sal >= np))
        {
            amt -= nl;
            lc--;
            sal -= np;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count / n << endl;
}