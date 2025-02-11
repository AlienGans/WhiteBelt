#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> vec;
    int i = 0;
    int Q = 0;                              // Кол-во операций
    cin >> Q;
    string select;

    while(i != Q)
    {
        string stroka;
        int num = 0;
        cin >> stroka;

        if (stroka == "COME")               // COME
        {
            cin >> num;
            if (num >= 0)
            {
                while (num != 0)
                {
                    vec.push_back(1);
                    num--;
                }
            } 
            else // -
            {
                num *= -1;
                while (num != 0)
                {
                    vec.pop_back();
                    num--;
                }
            }
        } 

        if (stroka == "QUIET")              // QUIET
        {
            cin >> num;
            vec[num]--;
        }

        if (stroka == "WORRY")              // WORRY   
        {
            cin >> num;
            vec[num]++;
        }

        if (stroka == "WORRY_COUNT")        // WORRY_COUNT Print
        {
            int kol = 0;
            for (auto j : vec)
            {
                if (j == 2) kol++;
            }
            cout << kol << endl;
        }
        
        i++;
    }

    return 0;
}