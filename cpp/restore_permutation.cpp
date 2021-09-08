#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        int count = 0;
        cin >> n;
        int arr[50];
        int br[50];
        for (int i = 0; i < (n + n); i++)
        {
            cin >> arr[i];
        }
        int k = 0;
        br[k] = arr[0];
        int counter = 0;
        for (int i = 1; i < (n + n); i++)
        {

            for (int j = 0; j <= k; j++)
            {
                if (arr[i] == arr[j])
                {
                    counter++;
                    break;
                }
            }
            if (counter == 0)
            {
                k++;
                br[k] = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << br[i] << " ";
        }
        cout << endl;
        t--;
    }
}