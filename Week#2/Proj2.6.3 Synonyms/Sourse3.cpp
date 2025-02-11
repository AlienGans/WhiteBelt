#include <iostream>
#include <set>
#include <map>
using namespace std;

void ADD(map<string, set<string>>& mp)
{
    string word_1, word_2; cin >> word_1 >> word_2;
    mp[word_1].insert(word_2);
    mp[word_2].insert(word_1);
}

void COUNT(map<string, set<string>>& mp)
{
    string word; cin >> word;
    cout <<mp[word].size() << endl;
}

void CHECK(map<string, set<string>>& mp)
{
    string word_1, word_2; cin >> word_1 >> word_2;
    if (mp[word_1].count(word_2) && mp[word_2].count(word_1)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    map<string, set<string>> Mp;
    int i = 0; int Q = 0;
    cin >> Q;
    while (i != Q)
    {
        string s; cin >> s;
        if (s == "ADD") ADD(Mp);
        if (s == "COUNT") COUNT(Mp);
        if (s == "CHECK") CHECK(Mp);
        i++;
    }
    return 0;
}
