#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;
    int a[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        count += n / a[i];
        n = n % a[i];
    }
    cout << count << endl;
}