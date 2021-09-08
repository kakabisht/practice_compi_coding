#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int l = 1; l < n; l++)
    {
        if ((n - l) % l == 0)
            count++;
    }
    cout << count << endl;
}