#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    ofstream outfile;
    string base = "";
    cin >> base;
    outfile.open(base, ios::out);
    if(!outfile.is_open())
    {
        cout << "Error Open file" << endl;
        exit(1);
    }
    outfile.write("1234",4);
    outfile.close();
    return 0;
}