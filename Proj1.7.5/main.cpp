#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b) cout << a;
    else
    {
        while (a * b != 0)
        {
            if (a > b)
            {
                a %= b;
            }
            else
            {
                b %= a;
            }
        }
        if (a > b) cout << a;
        else cout << b;
    }
}