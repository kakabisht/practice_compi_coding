#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counter = 0;
    cin >> counter;
    for (int i = 0; i < counter + 1; i++)
    {
        string s;
        getline(cin, s);
        int l = s.length();
        if (l > 10)
        {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}
