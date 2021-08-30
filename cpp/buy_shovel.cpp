#include <iostream>

using namespace std;

int main()
{
    int k, r;
    int temp = 0;
    cin >> k >> r;
    for (int i = 1; i <= 10; i++)
    {
        if ((k * i) % 10 == r)
        {
            temp = i;
            break;
        }
        else if ((k * i) % 10 == 0)
        {
            temp = i;
            break;
        }
    }
    cout << temp << endl;
}