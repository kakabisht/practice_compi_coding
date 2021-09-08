#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1 = n / 3;
        int c2 = c1;
        int s = n % 3;
        if (s == 1)
            c1++;
        else if (s == 2)
            c2++;
        cout << c1 << " " << c2 << endl;
    }
}
