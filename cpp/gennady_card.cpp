#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int k = 0;
    cin >> str;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if (str[0] == s[0] || str[1] == s[1])
        {
            k++;
            break;
        }
    }
    if (k > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}