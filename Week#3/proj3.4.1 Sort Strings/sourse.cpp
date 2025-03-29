#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class SortedStrings
{
    public:
    void AddString(const string& stroka)
    {
        vec_ss.push_back(stroka);
    }
    vector<string> GetSortedStrings()
    {
        sort(begin(vec_ss), end(vec_ss));
        return vec_ss;
    }
    private:
    vector<string> vec_ss;
};

void PrintSortedStrings(SortedStrings& class_str)
{
    for (const string& s : class_str.GetSortedStrings())
    {
        cout << s << ' ';
    }
    cout << endl;
}

int main()
{
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");
    PrintSortedStrings(strings);

    strings.AddString("second");
    PrintSortedStrings(strings);
    return 0;    
}