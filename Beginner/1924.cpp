#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string course;
    for (int i = 0; i < n; i++)
    {
        getline(cin >> ws, course);
    }
    cout << "Ciencia da Computacao" << endl;
    return 0;
}