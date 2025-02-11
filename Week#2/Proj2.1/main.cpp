#include <iostream>
#include <vector>
using namespace std;

// bool Contains(vector<string> words, string w)
// {
//      for (auto i : words)
//      {
//         if (i == w) return true;
//      }
// }

// void PrintWords(vector<string> words)
// {
//     for (auto i : words)
//     {
//         cout << i << ' ';
//     }
// }

void ChangeInt(int x)
{
    x = 42;
}

int main()
{
    //cout << Contains({"air", "water", "fire"}, "water");

    //PrintWords({"air", "water", "fire"});

    int a = 3;
    ChangeInt(a);
    cout << a;
}