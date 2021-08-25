#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string fir, sec, check;
    cin >> fir;
    cin >> sec;
    cin >> check;
    fir = fir + sec;
    sort(fir.begin(), fir.end());
    sort(check.begin(), check.end());
    if (fir == check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}