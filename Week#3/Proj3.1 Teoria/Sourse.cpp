#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int Min(int a, int b)
// {
//     if (a < b) return a;
//     else return b;
// }

// int Max(int a, int b)
// {
//     if (a > b) return a;
//     else return b;
// }

void Print(const vector<int>& vv, const string& title)
{
    cout << title << ": ";
    for (const auto it : vv)
    {
        cout << it << ' ';
    }
    cout << endl;
}

int main()
{
    // string s1 = "abc";
    // string s2 = "bca";
    // // cout << Min(8, 6) << endl;
    // // cout << Max(8, 6) << endl;

    // cout << min(s1, s2) << endl;
    // cout << max(s1, s2) << endl;

    vector<int> v = {1, 3, 2, 5, 4};
    Print(v, "init");
    sort(begin(v), end(v));
    Print(v, "sort");

    return 0;
}