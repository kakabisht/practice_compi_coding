#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        int k = abs((int(s1[i]) - int(s2[i])));
        cout << k;
    }
    cout << endl;
}