#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    cin >> line;

    int sum = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == 'f') 
        {
            sum++;
            if (sum == 2)
            {
                cout << i;
                break;
            }
        }
    }

    if (sum == 1) cout << -1;
    if (sum == 0) cout << -2;

    return 0;
}