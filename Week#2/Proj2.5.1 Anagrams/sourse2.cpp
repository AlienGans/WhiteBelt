#include <iostream>
#include <map>
using namespace std;

map<char, int> BuildCharCounters(const string& sl)
{
    map<char, int> m;
    for (const auto& s : sl)
    {
        ++m[s];
    }
    return m;
}

int main()
{
    int Q = 0;
    int i = 0;
    string s, s_1;

    cin >> Q;
    while(i != Q)
    {
        cin >> s >> s_1;
        BuildCharCounters(s) == BuildCharCounters(s_1) ? cout << "YES" << endl : cout << "NO" << endl;
        i++;
    }

    return 0;
}