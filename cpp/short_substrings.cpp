#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        int len = s.size();
        t.push_back(s[0]);
        for (int i = 1; i < len; i += 2)
        {
            t.push_back(s[i]);
        }
        cout << t << endl;
    }
    return 0;
}