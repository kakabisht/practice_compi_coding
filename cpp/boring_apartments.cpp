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
        int temp = n;
        int char_dig = 10;
        int dig = 0;
        int co = 0;
        while (n != 0)
        {
            n /= 10;
            dig++;
            co += dig;
        }
        cout << (((temp % 10) - 1) * 10) + co << endl;
        t--;
    }
}