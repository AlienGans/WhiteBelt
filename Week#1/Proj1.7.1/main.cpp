#include <iostream>
using namespace std;

int main()
{
    int A = 0;
    int B = 0;

    cin >> A >> B;

    if (B == 0) cout << "Impossible";
    else cout << A / B;
}