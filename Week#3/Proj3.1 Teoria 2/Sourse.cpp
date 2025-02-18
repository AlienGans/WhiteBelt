#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Print(const vector<int>& vv, const string& title)
{
    cout << title << ": ";
    for (const auto& i : vv)
    {
        cout << i << ' ';
    }
    cout << endl;
}

// bool Gt2(int x)
// {
//     if (x > 2) return true;
//     else return false;
// }

// bool Lt2(int x)
// {
//     if (x < 2) return true;
//     else return false;
// }

int main()
{
    vector<int> v = {1, 3, 2, 5, 4};
    
    //cout << count(begin(v), end(v), -1) << endl; // Функция подсчёта элементов со значением '-1'
    //cout << count_if(begin(v), end(v), Gt2) << endl; // Функция подсчёта элементов со значением '> 2' , 3 аргумент наша функция
    //cout << count_if(begin(v), end(v), Lt2) << endl; // Функция подсчёта элементов со значением '< 2' , 3 аргумент наша функция

    int thr = 0;
    cin >> thr;
    cout << count_if(begin(v), end(v), [thr](int x) { // Функция лямбда - выражение, которую мы опредили прямо тут в 3 аргументе, без определения её вне main
        if (x > thr) return true;
        else return false;
    }); 
    cout << endl;
    cout << endl;

    cout << count_if(begin(v), end(v), [thr](int x) {return x > thr;}); // более короткая запись


    return 0;
}