#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int Q = 0;                       // Кол-во операций
    
    string s_name_operation = "";    // Имя операции ADD, NEXT, DUMP
    string s_opisanie_oper  = "";    // Описание операции Payment, Walk, Salary, ... 
    int i = 0;                       // Индекс итераций
    int k = 0;                       // Индекс текущего месяца в NEXT
    cin >> Q;                        // Ввод кол-ва операций

    vector<int> mes = {32, 29, 32, 31, 32, 31, 32, 32, 31, 32, 31, 32, 32};
    
    vector<string> vec(32);
    
    while (i != Q)
    {
        int index_day = 0;           // Индекс дня
        cin >> s_name_operation;

        if (s_name_operation == "ADD")
        {
            cin >> index_day;
            cin >> s_opisanie_oper;
            
            vec[index_day] += s_opisanie_oper;
            vec[index_day] += ' ';
        }

        if (s_name_operation == "NEXT") 
        { 
            vector<string> temp = vec;
            vec.clear();
            vec.resize(mes[k + 1]);
            

            if(mes[k] < mes[k + 1])
            {
                vec = temp;
                vec.resize(mes[k + 1]);
            }
            else // k > k + 1
            {
                for (int j = 0; j < vec.size(); j++)
                {
                    vec[j] = temp[j];
                }

                for (int j = vec.size(); j < temp.size(); j++) // 29 -> 32
                {
                    vec[vec.size() - 1] += temp[j];
                }
            }
            
            k++;
            if (k == 12) k = 0;
        }

        if (s_name_operation == "DUMP") 
        {
            int kol = 0;
            cin >> index_day;
            for (int j = 0; j < vec[index_day].size(); j++)
            {
                if (vec[index_day][j] == ' ') kol++;
            }
            cout << kol << ' ' << vec[index_day] << endl;
        }

        i++;
    }
    
    return 0;
}

//12 ADD 5 Salary ADD 31 Walk ADD 30 WalkPreparations NEXT DUMP 5 DUMP 28 NEXT DUMP 31 DUMP 30 DUMP 28 ADD 28 Payment DUMP 28
//15 NEXT NEXT NEXT NEXT NEXT NEXT NEXT NEXT NEXT ADD 31 Oct_31 NEXT NEXT NEXT NEXT DUMP 28