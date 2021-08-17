#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100];
    int ea = 0;
    int ha = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ea++;
        else if (arr[i] == 1)
            ha++;
    }
    if (ha >= 1)
    {
        cout << "HARD" << endl;
    }
    if (ea == n)
    {
        cout << "EASY" << endl;
    }
}