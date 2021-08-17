#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int iseven = 0;
    cin >> iseven;
    if (iseven % 2 == 0 && iseven > 2)
        cout << "YES";
    else
        cout << "NO";
}
