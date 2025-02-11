#include <iostream>
#include <map>
#include <set>
using namespace std;

void add(map<set<string>, int>& mp, int& n)
{
    int size = 0; cin >> size;
    set<string> s;
    for (int i = 0; i < size; i++)
    {
        string ss; cin >> ss;
        s.insert(ss);
    }
    if (mp.count(s)) cout << "Already exists for " << mp[s] << endl;
    else
    {
        mp[s] = n;
        cout << "New bus " << n << endl;
        n++;
    } 
}

int main()
{
    map<set<string>, int> Mp;
    int i = 0; int Q = 0; int n = 1;
    cin >> Q;

    while (i != Q)
    {
        add(Mp, n);
        i++;
    }
    return 0;
}

// 5 2 Marushkino Kokoshkino 1 Kokoshkino 2 Marushkino Kokoshkino 2 Kokoshkino Marushkino 2 Kokoshkino Kokoshkino