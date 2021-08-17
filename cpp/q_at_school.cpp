#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int t = 0;
    cin >> t;
    string s1;
    cin >> s1;
    int count = 0;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (count > 0)
            {
                count = 0;
                continue;
            }
            if ((s1[j] == 'B') && (s1[j + 1] == 'G'))
            {
                swap(s1[j], s1[j + 1]);
                count++;
            }
        }
    }

    cout << s1 << endl;
}