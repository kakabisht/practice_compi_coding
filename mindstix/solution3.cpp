#include <iostream>

using namespace std;

void checkInc(int ar[], int num)
{
    int count = 0;
    for (int i = 0; i < num - 1; i++)
    {
        if (ar[i] >= ar[i + 1])
        {
            count++;
            int temp = ar[i];
            ar[i] = ar[i + 1];
            ar[i + 1] = temp;
        }
    }
    if (count <= 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    checkInc(arr, n);
}