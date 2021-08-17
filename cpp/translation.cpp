#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string l;
    cin >> l;
    int cou = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != l[s.size() - i - 1])
            cou++;
    }
    if (cou > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
