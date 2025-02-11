#include <iostream>
#include <vector>
using namespace std;

bool is_num(string stroka) // проверка является ли строка числом
{
    for (int i = 0; i < stroka.size(); i++)
    {
        if (stroka[i] < '0' || stroka[i] > '9')
        {
            return false;
        } 
        else return true;
    }
}

bool IsPalindrom(string w) // проверка является ли строка палидромом
{
    int len = w.length();
    if (w == "") return 1;

    for (int i = 0; i < len / 2; i++)
    {
        if(w[i] != w[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool WordLen(string w, int minL) // проверка длины слова
{
    if (w.size() < minL)
    {
        return false;
    } 
    else return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> result;
    while(true)
    {
        string word;
        //cin >> word;

        if (is_num(word)) 
        {
            minLength = stoi(word);
            break;
        }
        else
        {
            words.push_back(word);
        }
    }

    for (auto i : words)
    {
        if (IsPalindrom(i) && WordLen(i, minLength))
        {
            result.push_back(i);
        }
    }

    return result;
}




int main()
{
    vector<string> a;
    int min = 0;
    a = PalindromFilter(a, min);

    


    for (auto i : a)
    {
        cout << i << ' ';
    }

    return 0;
}