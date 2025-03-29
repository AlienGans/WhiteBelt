#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Person
{
    public:
    void ChangeFirstName(int year, const string& first_name)
    {
        name[year] = first_name;
        n_change.push_back(year);
        sort(begin(n_change), end(n_change));
    }
    void ChangeLastName(int year, const string& Last_name)
    { 
        surname[year] = Last_name;
        surn_change.push_back(year);
        sort(begin(surn_change), end(surn_change));
    }
    string GetFullName(int year)
    {
        //                                   ##### 1 этап
        int max_name = 0;        
        for (auto i : n_change)
        {
            if (i <= year) max_name = i;
        }
        
        int max_surname = 0;
        for (auto i : surn_change)
        {
            if (i <= year) max_surname = i;
        }
        
        //                                   #### 2 этап
        if (max_name == 0 && max_surname == 0)
        {
            return "Incognito";
        }

        if (max_name != 0 && max_surname != 0)
        {
            return name[max_name] + ' ' + surname[max_surname];
        }

        if (max_name == 0 && max_surname != 0)
        {
            return surname[max_surname] + " with unknown first name";
        }

        if (max_name != 0 && max_surname == 0)
        {
            return name[max_name] + " with unknown last name";
        }
        
    }
    private:
    map<int, string> name;
    map<int, string> surname;
    vector<int> n_change;
    vector<int> surn_change;
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

    return 0;
}