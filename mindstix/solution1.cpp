#include <iostream>
using namespace std;

void newArr(int ar[], int num, int op[])
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                op[i] *= ar[j];
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << op[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int output[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        output[i] = 1;
    }
    newArr(arr, n, output);
}