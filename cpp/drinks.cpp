#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n;
    cin >> n;
    float arr[100];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << fixed << setprecision(4) << sum / n << endl;
}
