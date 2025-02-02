#include <iostream>
#include <map>
using namespace std;

void CHANGE_CAPITAL(map<string, string>& mConCap)
{

    string country,        new_capital;
    cin >> country; cin >> new_capital;

    if (!mConCap.count(country))
    {
        cout << "Introduce new country " << country << " with capital " << new_capital << endl; 
        mConCap[country] = new_capital;
    }
    else
    {
        if (mConCap[country] == new_capital)
        {
            cout << "Country " << country << " hasn't changed its capital" << endl;
        } 
        else
        {
            string old_capital = mConCap.at(country);
            cout<< "Country " << country << " has changed its capital from "  << old_capital << " to " << new_capital << endl;
            mConCap[country] = new_capital;
        }
    }
}

void RENAME(map<string, string>& mConCap)
{
    string old_country_name,   new_country_name;
    cin >> old_country_name >> new_country_name;
    

    if (!mConCap.count(old_country_name) || old_country_name == new_country_name || mConCap.count(new_country_name))
    {
        cout << "Incorrect rename, skip" << endl;
    }
    else
    {
        string old_capital = mConCap.at(old_country_name);
        auto temp = mConCap.extract(old_country_name);
        temp.key() = new_country_name;
        mConCap.insert(move(temp));
        cout << "Country " << old_country_name << " with capital " << old_capital << " has been renamed to " << new_country_name << endl;
    }
}

void ABOUT(const map<string, string>& mConCap)
{
    string country;
    cin >> country;
    

    if (!mConCap.count(country)) 
    {
        cout << "Country " << country << " doesn't exist" << endl;
    }
    else
    {
        string capital = mConCap.at(country);
        cout << "Country " << country << " has capital " << capital << endl;
    }
}

void DUMP(const map<string, string>& mConCap)
{
    if (mConCap.empty())
    {
        cout << "There are no countries in the world" << endl;
    }
    else
    {
        for (const auto& [key, value] : mConCap)
        {
            cout << key << '/' << value << ' ';
        }
        cout << endl;
    }
}

int main()
{
    map<string, string> Con_Cap;
    int i = 0; int Q = 0;
    string s = "";
    cin >> Q;

    while (i != Q)
    {
        cin >> s;

        if (s == "CHANGE_CAPITAL") CHANGE_CAPITAL(Con_Cap);
        if (s == "RENAME") RENAME(Con_Cap);
        if (s == "ABOUT") ABOUT(Con_Cap);
        if (s == "DUMP") DUMP(Con_Cap);
        
        i++;
    }

    return 0;
} 

//6 CHANGE_CAPITAL RussianEmpire Petrograd RENAME RussianEmpire RussianRepublic ABOUT RussianRepublic RENAME RussianRepublic USSR CHANGE_CAPITAL USSR Moscow DUMP
//24 RENAME FakeCountry FarFarAway ABOUT FarFarAway DUMP CHANGE_CAPITAL TsardomOfRussia Moscow CHANGE_CAPITAL TsardomOfRussia Moscow CHANGE_CAPITAL ColonialBrazil Salvador CHANGE_CAPITAL TsardomOfRussia SaintPetersburg RENAME TsardomOfRussia RussianEmpire CHANGE_CAPITAL RussianEmpire Moscow CHANGE_CAPITAL RussianEmpire SaintPetersburg CHANGE_CAPITAL ColonialBrazil RioDeJaneiro DUMP RENAME ColonialBrazil EmpireOfBrazil ABOUT RussianEmpire RENAME EmpireOfBrazil UnitedStatesOfBrazil CHANGE_CAPITAL RussianEmpire Petrograd RENAME RussianEmpire RussianRepublic RENAME RussianRepublic USSR CHANGE_CAPITAL USSR Moscow CHANGE_CAPITAL UnitedStatesOfBrazil Brasilia RENAME UnitedStatesOfBrazil FederativeRepublicOfBrazil ABOUT RussianEmpire DUMP RENAME USSR USSR