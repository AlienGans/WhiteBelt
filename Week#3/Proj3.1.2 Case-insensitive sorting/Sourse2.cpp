#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string& lf, string& rh)
{
    return lexicographical_compare(lf.begin(), lf.end(), rh.begin(), rh.end(), 
    [] (char& left, char& right) 
    { 
        return tolower(left) < tolower(right);
    });
}


int main()
{
    vector<string> v;
    int i = 0; int Q = 0; cin >> Q;
    while (i != Q)
    {
        string str; cin >> str;
        v.push_back(str);
        ++i;
    }

    sort(begin(v), end(v), compare); 

    for (const auto& vv : v)
    {
        cout << vv << ' ';
    }

    return 0;
}