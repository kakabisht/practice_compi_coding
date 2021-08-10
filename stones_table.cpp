#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    string s1;
    cin >> s1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s1[i] == s1[i + 1])
        {
            counter++;
        }
    }
    cout << counter << endl;
}