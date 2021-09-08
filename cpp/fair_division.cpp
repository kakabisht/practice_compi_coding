#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count1 = 0, count2 = 0;
        int n;
        cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
                count1++;
            if (arr[i] == 2)
                count2++;
        }
        if (count2 % 2 == 0)
        {
            if (count1 % 2 == 0)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            count1 -= 2;
            if (count1 >= 0 && count1 % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}