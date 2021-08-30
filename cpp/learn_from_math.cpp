#include <iostream>

using namespace std;

int check_compo(long long int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count > 2)
        return 1;
    else
        return 0;
}

int main()
{
    long long int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        if ((check_compo(i) == 1) && (check_compo(n - i) == 1))
        {
            cout << i << " " << n - i << endl;
            break;
        }
    }
}