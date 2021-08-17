#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int counter = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        int check = int(s1[i]) - 48;
        if ((check == 4) || (check == 7))
        {
            counter++;
        }
    }
    if ((counter == 4) || (counter == 7))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}