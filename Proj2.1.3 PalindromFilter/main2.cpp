#include <iostream>
#include <vector>
using namespace std;

bool IsPalindrom(string w, int minL) // проверка является ли строка палидромом
{
    int len = w.length();

    if(w.size() < minL) return false;

    for (int i = 0; i < len / 2; i++)
    {
        if(w[i] != w[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength) 
{
    vector<string> result;
    for (auto i : words)
    {
        if (IsPalindrom(i, minLength))
        {
            result.push_back(i);
        }
    }

    return result;
}




int main()
{
    //vector<string> a = {"weew", "bro", "code"};
    vector<string> a = {"abacaba", "aba"};

    int min = 2;
    a = PalindromFilter(a, min);

    for (auto i : a)
    {
        cout << i << ' ';
    }

    return 0;
}