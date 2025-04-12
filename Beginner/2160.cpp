#include <iostream>
#include <string>
int main()
{
    std::string L;
    std::getline(std::cin, L);
    if (L.length() <= 80)
    {
        std::cout << "YES\n";
    }
    else
    {
        std::cout << "NO\n";
    }
    return 0;
}