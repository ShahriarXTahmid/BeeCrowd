#include <iostream>
using namespace std;
int main()
{
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    int sum = j1 + j2;
    bool player1_wins_basic = false;

    if (p == 1)
    { // Player 1 chose even
        if (sum % 2 == 0)
        {
            player1_wins_basic = true;
        }
    }
    else
    { // Player 1 chose odd
        if (sum % 2 != 0)
        {
            player1_wins_basic = true;
        }
    }

    if (r == 1)
    { // Player 1 cheated
        if (a == 1)
        { // Player 2 accused
            cout << "Jogador 2 ganha!" << endl;
        }
        else
        { // Player 2 did not accuse
            cout << "Jogador 1 ganha!" << endl;
        }
    }
    else
    { // Player 1 did not cheat
        if (a == 1)
        { // Player 2 accused (false accusation)
            cout << "Jogador 1 ganha!" << endl;
        }
        else
        { // Player 2 did not accuse, basic game rules apply
            if (player1_wins_basic)
            {
                cout << "Jogador 1 ganha!" << endl;
            }
            else
            {
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    }

    return 0;
}