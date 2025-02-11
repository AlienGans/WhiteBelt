#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> Duo(0);
    int N = 0;
    cin >> N; 

    while(N != 0)
    {
        int temp = N % 2;
        Duo.push_back(temp);
        N /= 2;
    }

    reverse(begin(Duo), end(Duo));

    for (auto i : Duo)
    {
        cout << i;
    }

    return 0;
}