#include <iostream>
using namespace std;

void PrintParity(int x)
{
    string parity = (x % 2 == 0) ? "even" : "odd";

    // if (x % 2 == 0) {
    //     parity = "even";
    // } else {
    //     parity = "odd";
    // }

    cout << x << " is " << parity << endl;
}

void PrintPositivity(int x)
{
    string positivity = (x > 0) ? "positive" : ( (x < 0) ? "negative" : "zero");

    // if (x > 0) {
    //     positivity = "positive";
    // } else if (x < 0) {
    //     positivity = "negative";
    // } else {
    //     positivity = "zero";
    // }

    cout << x << " is " << positivity << endl;
}


int main()
{
    //PrintParity(5);
    PrintPositivity(1);
    PrintPositivity(0);
    PrintPositivity(-1);
    return 0;
}