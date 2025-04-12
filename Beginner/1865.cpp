#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int force;
        string name;
        cin >> name;
        cin.ignore();
        cin >> force;
        if (name == "Thor" && force >= 50)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}