#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int levels = 0;
    int last = 0, current = 0;
    while (n > 0)
    {
        levels++;
        current = last + levels;
        last = current;
        n -= current;
        if (n < 0)
            levels--;
    }
    cout << levels << endl;
}