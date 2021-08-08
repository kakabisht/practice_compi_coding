#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data; // to hold our files information per line
    ifstream myfile("example.txt");

    if (myfile.is_open())
    {
        while (getline(myfile, data))
        {
            cout << data << endl;
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";

    return 0;
}
