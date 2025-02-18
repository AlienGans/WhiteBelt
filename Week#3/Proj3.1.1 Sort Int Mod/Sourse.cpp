#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int i = 0; int n = 0; cin >> n;
    while (i != n)
    {
        int k = 0; cin >> k;
        v.push_back(k);
        ++i;
    }
    sort(begin(v), end(v), [](int& left, int& right) {return abs(left) < abs(right);});
    for (const auto& it : v)
    {
        cout << it << ' ';
    }
    return 0;
}