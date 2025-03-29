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
        if (!mp_fn.empty() && !mp_ln.empty())
        {
            int temp = 0;
            for (const auto& i : mp_fn)
            {
                temp = i.first; break;
            }

            int temp2 = 0;
            for (const auto& i : mp_ln)
            {
                temp2 = i.first; break;
            }
            
            if(year < temp && year < temp2)
            {
                return "Incognito";
            }
            else
            {
                mp_fn.size();
                mp_ln.size();
            }
            
        }  
    }



    // else if (mp_fn.count(year) && !mp_ln.count(year))
    //         {
    //             if (vec_fln.empty())
    //             {
    //                 vec_fln.push_back(mp_fn[year]);
    //             }
    //             else
    //             {
    //                 vec_fln[0] = mp_fn[year];
    //             }
            
    //             return mp_fn[year] + " with unknown last name";
    //         }
    //         else if (!mp_fn.count(year) && mp_ln.count(year))
    //         {
    //             return mp_ln[year] + " with unknown first name";
    //         }
    //         else
    //         {
                
    //         }


    private:
    vector<string> vec_fln; // [0] - first name; [1] - last name
    //map<int, vector<string>> mp_fln;
    map<int, string> mp_fn;
    map<int, string> mp_ln;
};

int main()
{
    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1910}) {
        cout << person.GetFullName(year) << endl;
    }
    
    // person.ChangeFirstName(1970, "Appolinaria");
    // for (int year : {1969, 1970}) {
    //     cout << person.GetFullName(year) << endl;
    // }
    
    // person.ChangeLastName(1968, "Volkova");
    // for (int year : {1969, 1970}) {
    //     cout << person.GetFullName(year) << endl;
    // }

    return 0;
}