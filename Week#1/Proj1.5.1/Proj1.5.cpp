#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<std::string> listStrok(3);
    std::cin >> listStrok[0];
    std::cin >> listStrok[1];
    std::cin >> listStrok[2];

    sort(begin(listStrok), end(listStrok));
    std::cout << listStrok[0];
}