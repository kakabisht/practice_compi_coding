#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int low_case = 0;
    int up_case = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if ((int(s[i]) > 96) && (int(s[i]) < 123))
        {
            low_case++;
        }
        else if ((int(s[i]) > 64) && (int(s[i]) < 91))
        {
            up_case++;
        }
    }
    if (low_case < up_case)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else if (up_case <= low_case)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
}