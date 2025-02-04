#include <iostream>
#include <map>
#include <vector>
using namespace std;

void NEW_BUS(map<string, vector<string>>& moBus, vector<string>& BBus)
{
    string bus;
    int stop_count = 0;
    cin >> bus; cin >> stop_count;
    BBus.push_back(bus);
    vector<string> Stop_Vec(stop_count);
    for (auto& item : Stop_Vec) cin >> item;
    moBus[bus] = Stop_Vec;
}

void BUSES_FOR_STOP(map<string, vector<string>>& mBus, vector<string>& BBus)
{            
    string stop; cin >> stop; 
    bool flag = false;

    for (const auto& s : mBus)
    {
        for (const auto& ss : s.second)
        {
            if (ss == stop) 
            {
                flag = true;
            }
        }
    }   
    
    if (flag)
    {
        for (const auto& i : BBus)
        {
            for (int it = 0; it < mBus[i].size(); it++)
            {
                if(mBus[i][it] == stop)
                {
                    cout << i << ' ';
                } 
            }
        }
        cout << endl;
    }
    
    if (!flag) cout << "No stop" << endl;
}

void BUSES_FOR_STOP_2(map<string, vector<string>>& mBus, vector<string>& BBus, string sstop, string bus)
{
    bool flag = false;
    for (const auto& i : BBus)
    {
        for (int it = 0; it < mBus[i].size(); it++)
        {
            if (i != bus)
            {
                if(mBus[i][it] == sstop)
                {
                    cout << i << ' ';
                    flag = true;
                }
            }   
        }
    }
    if (!flag) cout << "no interchange";
}

void STOPS_FOR_BUS(map<string, vector<string>>& mBus, vector<string>& BBus)
{
    bool flag_bus = false;
    string bus; cin >> bus;
    for (const auto& i : BBus)
    {
        if (i == bus)
        {
            flag_bus = true;
            for (int it = 0; it < mBus[i].size(); it++)
            {
                cout << "Stop " << mBus[i][it] << ": ";
                BUSES_FOR_STOP_2(mBus, BBus, mBus[i][it], bus);
                cout << endl;
            }
        }
    }
    if (!flag_bus) cout << "No bus" << endl;
}

void ALL_BUSES(map<string, vector<string>>& mBus)
{
    if (mBus.empty()) cout << "No buses" << endl;
    else
    {
        for (const auto& b : mBus)
        {
            cout << "Bus " << b.first << ": ";
            for (const auto& ost : b.second)
            {
                cout << ost << ' ';
            }
            cout << endl;
        }
    }
}

int main()
{
    map<string, vector<string>> mBus;
    vector<string> Bus;
    int Q = 0, i = 0; string sB;
    cin >> Q;

    while (i != Q)
    {
        cin >> sB;
        if (sB == "NEW_BUS") NEW_BUS(mBus, Bus);
        if (sB == "BUSES_FOR_STOP") BUSES_FOR_STOP(mBus, Bus);
        if (sB == "STOPS_FOR_BUS") STOPS_FOR_BUS(mBus, Bus);
        if (sB == "ALL_BUSES") ALL_BUSES(mBus);
        i++;
    } 

    return 0;
}
