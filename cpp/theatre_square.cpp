#include <iostream>

using namespace std;

int main()
{
    long long int n, m, a, s1 = 1, s2 = 1;
    cin >> n >> m >> a;
    if (n % a == 0)
    {
        s1 = (n / a);
    }
    else if (n % a != 0)
    {
        s1 = (n / a) + 1;
    }
    if (m % a == 0)
    {
        s2 = (m / a);
    }
    else if (m % a != 0)
    {
        s2 = (m / a) + 1;
    }
    cout << s1 * s2 << endl;
    return 0;
}