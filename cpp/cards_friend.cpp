#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long int w, h;
        long long int n;
        int count = 1;
        cin >> w >> h >> n;
        while (w % 2 == 0)
        {
            count *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            count *= 2;
            h = h / 2;
        }
        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
}