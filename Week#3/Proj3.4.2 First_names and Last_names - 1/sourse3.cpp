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
            int min1 = NalZapMin(mp_fn, year);
            int min2 = NalZapMin(mp_ln, year);
            
            if(year < min1 && year < min2)
            {
                return "Incognito";
            }

            int max1 = NalZapMax(mp_fn, year);
            int max2 = NalZapMax(mp_ln, year);

            if (max1 < max2)
            {
                if (!mp_ln.count(max2) && mp_fn.count(max1))
                {
                    return mp_fn[max1] + " with unknown last name";
                } 
            }
            else
            {
                if (mp_ln.count(max2) && !mp_fn.count(max1))
                {
                    return mp_ln[max2] + " with unknown first name";
                }
            }
        }  
    }



    private:
    int NalZapMin(map<int, string>& mp, int yeaar)
    {
        for (const auto& i : mp)
        {
            return i.first;
        }
    }

    int NalZapMax(map<int, string>& mp, int yeaar)
    {
        int max = 0;
        for (const auto& i : mp)
        {
            // if (i.first <= yeaar)
            // {
            //     max = i.first;
            // }
            max = i.first;
        }
        return max;
    }

    //vector<string> vec_fln; // [0] - first name; [1] - last name
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

    return 0;
}