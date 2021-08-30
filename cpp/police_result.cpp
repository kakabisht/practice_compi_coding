#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos_count = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] == -1) && (pos_count == 0))
        {
            count++;
        }
        else if (arr[i] <= -1)
        {
            pos_count += arr[i];
            if (pos_count < 0)
            {
                count++;
            }
        }
        else if ((arr[i] >= 1))
        {
            pos_count += arr[i];
        }
    }
    cout << count << endl;
}