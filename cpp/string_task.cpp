#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int i = 0;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string f_str = " ";
    while (i < str.length())
    {
        if ((str[i] != 'a') && (str[i] != 'o') && (str[i] != 'y') && (str[i] != 'e') && (str[i] != 'u') && (str[i] != 'i'))
        {
            f_str += '.';
            f_str += str[i];
        }
        i++;
    }
    cout << f_str << endl;
}