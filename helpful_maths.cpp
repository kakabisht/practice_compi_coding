#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int arr[100];

    int k = 0;
    for (int i = 0; i < len; i++)
    {
        if (isdigit((str[i])))
        {
            arr[k] = int(str[i]) - 48;
            k++;
        }
    }

    sort(arr, arr + k);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i];
        if (i < k - 1)
        {
            cout << "+";
        }
    }
}
