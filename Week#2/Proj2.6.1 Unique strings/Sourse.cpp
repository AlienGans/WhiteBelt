#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int i = 0; int N = 0;
    cin >> N;
    vector<string> v;
    while (i != N)
    {
        string s;
        cin >> s;
        v.push_back(s);
        i++;
    }

    set<string> setS(begin(v), end(v));
    cout << setS.size();

    return 0;
}