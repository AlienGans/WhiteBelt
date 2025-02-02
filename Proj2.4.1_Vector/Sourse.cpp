#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> temp;
    int N = 0;
    int i = 0;
    int sum = 0;
    int kol = 0;

    cin >> N;

    while (i != N)
    {
        int tmp = 0;
        cin >> tmp;
        temp.push_back(tmp);
        sum += temp[i];
        i++;
    }
    if(!temp.empty()) sum /= temp.size();

    for (int& j : temp)
    {
        if (j > sum) kol++;
    }
    cout << kol << endl;

    for (int l = 0; l < temp.size(); ++l)
    {
        if (temp[l] > sum) cout << l << ' ';
    }
}