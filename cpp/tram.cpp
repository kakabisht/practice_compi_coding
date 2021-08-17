#include <iostream>

using namespace std;

int main()
{
    int stops = 0;
    cin >> stops;
    int num_ppl = 0;
    int min_cap = 0;

    int arr[1000][2];
    for (int i = 0; i < stops; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int temp = 0;

    for (int i = 0; i < stops; i++)
    {
        temp = num_ppl;
        num_ppl += arr[i][1] - arr[i][0];
        if (min_cap < num_ppl)
        {
            min_cap = num_ppl;
        }
    }
    cout << min_cap << endl;
}