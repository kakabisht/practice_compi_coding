#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5000];
    int ar1[5000];
    int ar2[5000];
    int ar3[5000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fi = 0, se = 0, th = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ar1[fi] = i;
            fi++;
        }
        else if (arr[i] == 2)
        {
            ar2[se] = i;
            se++;
        }

        else if (arr[i] == 3)
        {
            ar3[th] = i;
            th++;
        }
    }
    int it = min(fi, min(se, th));
    cout << it << endl;
    if (it > 0)
    {
        for (int i = 0; i < it; i++)
        {
            cout << ar1[i] + 1 << " " << ar2[i] + 1 << " " << ar3[i] + 1 << endl;
        }
    }
}