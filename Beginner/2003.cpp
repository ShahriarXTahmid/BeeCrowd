#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string time;
    while (getline(cin, time))
    {
        int h, m;
        char colon;
        istringstream iss(time);
        iss >> h >> colon >> m;

        int total_minutes = h * 60 + m;
        int meeting_time = 8 * 60;
        int wake_time = total_minutes;
        int earliest_arrival = wake_time + 30;
        int latest_arrival = wake_time + 60;

        int max_delay = 0;
        if (earliest_arrival > meeting_time)
        {
            max_delay = earliest_arrival - meeting_time;
        }
        if (latest_arrival > meeting_time)
        {
            max_delay = max(max_delay, latest_arrival - meeting_time);
        }

        cout << "Atraso maximo: " << max_delay << endl;
    }
    return 0;
}