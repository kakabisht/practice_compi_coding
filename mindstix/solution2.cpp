#include <iostream>
#include <unordered_map>
using namespace std;

void findPairs(int arr[][2], int num)
{
    unordered_map<int, int> pa;
    for (int i = 0; i < num; i++)
    {
        int fir = arr[i][0];
        int sec = arr[i][1];

        if ((pa.find(sec) != pa.end()) && (pa[sec] == fir))
        {
            cout << sec << " " << fir << endl;
        }
        else
        {
            pa[fir] = sec;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    findPairs(arr, n);
}