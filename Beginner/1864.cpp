#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string quote = "WHAT IS IMPORTANT IS THE PATH YOU CHOOSE TO PURSUE FROM NOW ON";
    cout << quote.substr(0, N) << endl;
    return 0;
}