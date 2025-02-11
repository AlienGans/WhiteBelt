#include <iostream>
using namespace std;

int Factorial (int x)
{
    if (x < 0) return 1;
    int temp = 1;
    for (int i = 1; i <= x; i++)
    {
        temp *= i; 
    }
    x = temp;
    return x;
}


int main()
{
    int ch = 0;
    cin >> ch;

    cout << Factorial(ch);
}