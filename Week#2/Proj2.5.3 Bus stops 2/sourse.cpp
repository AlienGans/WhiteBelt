#include <iostream>
#include <map>
#include <vector>
using namespace std;

void Marshrut(map<vector<string>, int>& mBus, int kol, int& i)
{
    vector<string> str(kol);
    for (auto& item : str) cin >> item;
    if (mBus.count(str)) cout << "Already exists for " << mBus[str] << endl;
    else
    {
        mBus[str] = i;
        cout << "New bus " << i << endl;
        i++;
    }
}

int main()
{
    map<vector<string>, int> Mbus;
    int Q = 0; int QQ = 0; int i = 0; int n = 1;
    cin >> Q;
    while(i != Q) 
    {
        cin >> QQ;
        Marshrut(Mbus, QQ, n);
        i++;
    }
    return 0;
}