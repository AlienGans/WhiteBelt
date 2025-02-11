#include <iostream>
using namespace std;

int main()
{   
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;

    if (N > B)
    {
        double temp = Y * N / 100;
        N -= temp;
        cout << N;
    } else if (N > A)
    {
        double temp = X * N / 100;
        N -= temp;
        cout << N;
    }
    else cout << N;

    return 0;
}