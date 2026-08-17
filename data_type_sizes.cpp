#include <iostream>

using namespace std;

int main()
{
    cout << "Size of data types in this environment:" << endl;

    cout << "char        : " << sizeof(char) << " byte(s)" << endl;
    cout << "short int   : " << sizeof(short int) << " byte(s)" << endl;
    cout << "int         : " << sizeof(int) << " byte(s)" << endl;
    cout << "long int    : " << sizeof(long int) << " byte(s)" << endl;
    cout << "float       : " << sizeof(float) << " byte(s)" << endl;
    cout << "double      : " << sizeof(double) << " byte(s)" << endl;
    cout << "bool        : " << sizeof(bool) << " byte(s)" << endl;
    cout << "int pointer : " << sizeof(int*) << " byte(s)" << endl;

    return 0;
}