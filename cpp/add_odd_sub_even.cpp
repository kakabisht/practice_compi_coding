#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int val = b - a;
        int count = 0;

        while (val != 0)
        {
            if (val > 0)
            {
                if (val % 2 != 0)
                {
                    count++;
                    val = 0;
                }
                else if (val % 2 == 0)
                {
                    count += 2;
                    val = 0;
                }
            }
            else if (val < 0)
            {
                if (val % 2 == 0)
                {
                    count++;
                    val = 0;
                }
                else if (val % 2 != 0)
                {
                    count += 2;
                    val = 0;
                }
            }
        }

        cout << count << endl;
    }
}