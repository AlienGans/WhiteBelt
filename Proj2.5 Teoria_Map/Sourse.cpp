#include <iostream>
#include <map>
using namespace std;

void PrintMap(const map<int, string>& m)
{
    cout << "Size events = " << m.size() << endl;
    for (auto item : m)
    {
        cout << item.first << ": " << item.second << endl;
    }
}

map<string, int> BuildReversedMap(const map<int, string>& m)
{
    map<string, int> result;
    for (auto item : m)
    {
        result[item.second] = item.first;  
    }
    return result;
}

void PrintReversedMap(const map<string, int>& m)
{
    cout << "Size events = " << m.size() << endl;
    for (auto item : m)
    {
        cout << item.first << ": " << item.second << endl;
    }
}

int main()
{
    map<int, string> events;
    events[1950] = "Bjarne Stroustrup's birth";
    events[1941] = "Dennis Ritchie's birth";
    events[1970] = "UNIX epoch start";


    string s = events[4];
    //cout << events.count(4);
    PrintMap(events);

    //cout << events[1950] << endl;

    //events.erase(1970);


    //PrintMap(events);

   // map<string, int> event_for_year = BuildReversedMap(events);
    //PrintReversedMap(event_for_year);

    //cout << event_for_year["Dennis Ritchie's birth"];   


    return 0;
}