#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int arr[100000];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] % 2 == 0)
            cout << (arr[i] / 2) - 1 << endl;
        else if (arr[i] % 2 != 0)
            cout << (arr[i] / 2) << endl;
    }
}