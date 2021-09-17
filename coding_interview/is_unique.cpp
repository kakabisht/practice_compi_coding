#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string str;
    int k = 0;
    cin >> str;
    // Without any additional data structures:
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
            k++;
    }
    if (k == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    // With using additional data structures

    unordered_map<char, int> M;
    k = 0;
    for (int i = 0; str[i]; i++)
    {
        // If the current characters is not found then insert current characters with frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }

        // Else update the frequency
        else
        {
            M[str[i]]++;
            k++;
        }
    }

    // Traverse the map to print the frequency
    // for (auto &it : M)
    // {
    //     cout << it.first << ' ' << it.second << '\n';
    // }
    if (k == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}