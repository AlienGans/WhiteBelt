#include <iostream>
#include <map>
#include <vector>
using namespace std;

void PrintMap(const map<string, int>& m)
{
    for (const auto& item : m)
    {
        cout << item.first << ": " << item.second << endl;
    }
}

int main()
{
    // map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
    // PrintMap(m);

    vector<string> words = {"one", "two", "three"};
    map<char, vector<string>> grouped_words;
    for (const string& word : words)
    {
        grouped_words[word[0]].push_back(word); 
    }

    // for (const auto& item : grouped_words)
    // {
    //     cout << item.first << endl;
    //     for (const string& word : item.second)
    //     {
    //         cout << word << " ";
    //     }
    //     cout << endl;
    // }

    for (const auto& [key, value] : grouped_words)
    {
        cout << key << endl;
        for (const string& word : value)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    
    return 0; 
}