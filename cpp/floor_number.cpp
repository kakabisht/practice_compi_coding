#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int floor = 2;
            int level = 1;
            while (floor < n)
            {
                floor += x;
                level++;
            }
            cout << level << endl;
        }
    }
}