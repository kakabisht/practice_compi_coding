#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int diff_socks = 0;
    int same_socks = 0;
    while (1)
    {
        if ((a >= 1) && (b >= 1))
        {
            diff_socks++;
            a--;
            b--;
        }
        else if ((a == 0) && (b >= 2))
        {
            same_socks++;
            b -= 2;
        }
        else if ((b == 0) && (a >= 2))
        {
            same_socks++;
            a -= 2;
        }
        else
        {
            break;
        }
    }
    cout << diff_socks << " " << same_socks << endl;
}