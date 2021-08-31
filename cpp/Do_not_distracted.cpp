#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int f_counter = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                int counter = 0;
                for (int j = i + 1; j < n; j++)
                {
                    if (s[i] == s[j])
                    {
                        counter++;
                    }
                }
                if (counter >= 1)
                {
                    f_counter++;
                    break;
                }
            }
        }
        if (f_counter == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
}