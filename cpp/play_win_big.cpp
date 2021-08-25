#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        int l_sum = 0;
        int r_sum = 0;
        int arr[1000];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = n - 1; j >= 0; j -= 2)
        {
            r_sum += arr[j];
        }
        for (int j = 0; j < n; j += 2)
        {
            l_sum += arr[j];
        }
        if (l_sum > r_sum)
            cout << l_sum << endl;
        else
            cout << r_sum << endl;
    }
}