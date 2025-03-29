#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Person
{
    public:
    void ChangeFirstName(int year, const string& first_name)
    {
        if (!mp_fn.count(year))
        {
            mp_fn[year] = first_name;
        }
    }
    void ChangeLastName(int year, const string& last_name)
    {
        if (!mp_ln.count(year))
        {
            mp_ln[year] = last_name;
        }
    }
    string GetFullName(int year)
    {
        if (!mp_fn.count(year) && !mp_ln.count(year))
        {
            return "Incognito";
        }
        else if (mp_fn.count(year) && !mp_ln.count(year)) // Только имя
        {
            return mp_fn[year] + " with unknown last name";
        }
        else if (!mp_fn.count(year) && mp_ln.count(year)) // Только фамилия
        {
            return mp_ln[year] + " with unknown first name";;
        }
        else // И имя и фамилия
        {
            return mp_fn[year] + ' ' + mp_ln[year];
        }
    }
    private:
    map<int, string> mp_fn;
    map<int, string> mp_ln;
};

int main()
{
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }
    
    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
    
    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    
    // person.ChangeFirstName(1900, "Polina");
    // person.ChangeFirstName(1900, "Alina");
    // person.ChangeFirstName(1962, "Alena");
    // person.ChangeFirstName(1965, "Sveta");

    // person.ChangeLastName(1900, "Sergeeva");
    // person.ChangeLastName(1900, "Andreeva");
    // person.ChangeLastName(1990, "Andreeva");


    // for (int year : {1900, 1965, 1990, 1997})
    // {
    //     cout << person.GetFullName(year) << endl;
    // }





    return 0;
}