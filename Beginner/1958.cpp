#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    double X;
    cin >> X;

    if (X == 0)
    {
        if (signbit(X))
        {
            cout << "-0.0000E+00" << endl;
        }
        else
        {
            cout << "+0.0000E+00" << endl;
        }
        return 0;
    }

    ostringstream oss;
    oss << scientific << setprecision(4) << X;
    string sciNotation = oss.str();

    size_t ePos = sciNotation.find('e');
    if (ePos == string::npos)
    {
        ePos = sciNotation.find('E');
    }

    string mantissaStr = sciNotation.substr(0, ePos);
    string exponentStr = sciNotation.substr(ePos + 1);

    char mantissaSign = mantissaStr[0] == '-' ? '-' : '+';
    if (mantissaStr[0] == '+' || mantissaStr[0] == '-')
    {
        mantissaStr = mantissaStr.substr(1);
    }

    int exponent = stoi(exponentStr);
    char exponentSign = exponent >= 0 ? '+' : '-';
    int absExponent = abs(exponent);

    cout << mantissaSign << mantissaStr << 'E' << exponentSign << setw(2) << setfill('0') << absExponent << endl;

    return 0;
}