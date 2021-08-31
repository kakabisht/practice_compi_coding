#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int t;
    cin >> t;
    int arr[100][2];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int m_count = 0, c_count = 0;
    for (int i = 0; i < t; i++)
    {
        if (arr[i][0] < arr[i][1])
        {
            c_count++;
        }
        if (arr[i][0] > arr[i][1])
        {
            m_count++;
        }
    }
    if (m_count > c_count)
    {
        cout << "Mishka" << endl;
    }
    if (c_count > m_count)
    {
        cout << "Chris" << endl;
    }
    else if (m_count == c_count)
    {
        cout << "Friendship is magic!^^" << endl;
    }
}