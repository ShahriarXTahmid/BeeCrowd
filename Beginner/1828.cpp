#include <iostream>
#include <string>
#include <map>
using namespace std;
int determineWinner(const string &sheldon, const string &raj)
{
    if (sheldon == raj)
    {
        return 0; // Tie
    }

    map<string, map<string, bool>> rules = {
        {"tesoura", {{"papel", true}, {"lagarto", true}}},
        {"papel", {{"pedra", true}, {"Spock", true}}},
        {"pedra", {{"lagarto", true}, {"tesoura", true}}},
        {"lagarto", {{"Spock", true}, {"papel", true}}},
        {"Spock", {{"tesoura", true}, {"pedra", true}}}};

    if (rules[sheldon].find(raj) != rules[sheldon].end())
    {
        return 1; // Sheldon wins
    }
    else
    {
        return -1; // Raj wins
    }
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        string sheldon, raj;
        cin >> sheldon >> raj;
        int result = determineWinner(sheldon, raj);
        cout << "Caso #" << t << ": ";
        if (result == 1)
        {
            cout << "Bazinga!";
        }
        else if (result == -1)
        {
            cout << "Raj trapaceou!";
        }
        else
        {
            cout << "De novo!";
        }
        cout << endl;
    }
    return 0;
}