#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n;
        cin >> n;
        long long int sticks = 1;

        sticks = n / 2;
        if (n % 2 == 1)
        {
            sticks++;
        }

        cout << sticks << endl;
        t--;
    }
}