#include <iostream>
int main()
{
    int t1, t2, t3, t4;
    std::cin >> t1 >> t2 >> t3 >> t4;
    int max_devices = t1 + t2 + t3 + t4 - 3;
    std::cout << max_devices << std::endl;
    return 0;
}