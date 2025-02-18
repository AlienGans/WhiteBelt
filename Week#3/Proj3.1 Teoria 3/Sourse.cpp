#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(const vector<int>& v, const string& title)
{
    cout << title << ": ";
    for (const auto& i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 3, 5, 4, 7, 4};
    Print(v, "init");

    // for (int i = 0; i < v.size(); ++i)
    // {
    //     ++v[i];
    // }

    // for (auto& i : v)
    // {
    //     ++i;
    // }

    //Print(v, "inc ");

    // int cnt = count_if(begin(v), end(v), [](int x) {return x % 2 != 0;});
    // cout << cnt;

    int cnt = 0;
    for (const auto& i : v)
    {
        cnt += (i % 2 != 0);
    }
    cout << cnt;
    return 0;
}