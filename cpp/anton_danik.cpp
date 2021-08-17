#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int a_count = 0;
    int d_count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == 'A')
            a_count++;
        else if (s1[i] == 'D')
            d_count++;
    }
    if (a_count < d_count)
        cout << "Danik" << endl;
    else if (d_count < a_count)
        cout << "Anton" << endl;
    else if (d_count == a_count)
        cout << "Friendship" << endl;
}