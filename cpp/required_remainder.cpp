#include <iostream>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        long long int x, y, n;
        cin >> x >> y >> n;
        cout << (n - y) / x * x + y << endl;
        t--;
    }
}