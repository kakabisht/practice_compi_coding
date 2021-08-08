#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int pos_inc = 0;
    int neg_inc = 0;

    int X = 0;
    for (int i = 0; i < n; i++)
    {
        char stm[3];
        cin >> stm;
        for (int j = 0; j < 3; j++)
        {
            if (stm[j] == '+')
                pos_inc++;
            else if (stm[j] == '-')
                neg_inc++;
        }
        if (pos_inc == 2)
            X++;
        else if (neg_inc == 2)
            X--;
        pos_inc = 0;
        neg_inc = 0;
    }
    cout << X << endl;
}