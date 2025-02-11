#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string w)
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


int main()
{
    string stroka = "";
    cin >> stroka;


    cout << IsPalindrom(stroka);
    return 0;
}