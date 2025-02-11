#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v)
{
    vector<int> v_cop;
    for (int i = v.size() - 1; i >= 0; --i)
    {
        v_cop.push_back(v[i]);
    }
    return v_cop;
}


int main()
{
    vector<int> a = {1, 2, 313, 15, 63, 34};
    a = Reversed(a);

    for (auto i : a) cout << i << ' ';
}