#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v)
{
    vector<int> res;
    for (int i = v.size()-1; i>=0; --i)
    {
        res.push_back(v[i]);
    }
    v = res;
}

int main()
{
    vector<int> x = {17, 24, 3, 14, 57, 10};
    Reverse(x);
    
    for (auto i : x) cout << i << ' ';
}
