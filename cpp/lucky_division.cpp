#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    bool flag = true;
    for (int i = 4; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = true;
            if (n != '7' && n != '4')
            {
                flag = false;
                break;
            }
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}