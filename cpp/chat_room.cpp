#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2 = "hello";
    int k = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[k])
        {
            k++;
        }
    }
    if (k >= 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}