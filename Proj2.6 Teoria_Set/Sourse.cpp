#include <iostream>
#include <vector>
#include <set>
using namespace std;

void PrintSet(const set<string>& s)
{
    cout << "Size = " << s.size() << endl;
    for (const auto& item : s)
    {
        cout << item << endl;
    }
    cout << endl;
}

int main()
{
    set<string> famous_persons;
    famous_persons.insert("Stroustrup");
    famous_persons.insert("Ritchie");
    famous_persons.insert("Semyon");

    //PrintSet(famous_persons); 

    famous_persons.erase("Semyon");

    //PrintSet(famous_persons);


    set<string> month_names = {"January", "March", "February", "March"};
    set<string> month_names2 = {"March", "January",  "February"};
    //PrintSet(month_names);
    //cout << (month_names == month_names2) << endl;

    //cout << month_names.count("March") << endl;


    vector<string> v = {"a", "b", "a"};
    set<string> s(begin(v), end(v));
    PrintSet(s);

    return 0;
}