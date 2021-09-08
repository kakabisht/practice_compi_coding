#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i * i * i >= n)
        {
            cout << i << endl;
            break;
        }
    }
}