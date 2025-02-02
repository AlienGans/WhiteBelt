#include <iostream>
#include <vector>
//#include <string>
using namespace std;

void MoveStrings(vector<string>& sourse1, vector<string>& destination1)
{
    for (int i = 0; i < sourse1.size(); i++)
    {
        destination1.push_back(sourse1[i]);
    }
    sourse1.clear();
}

// int main()
// {
//     vector<string> source;
//     vector<string> destination;
//     int size = 0;
//     int i = 0;

//     cin >> size;
//     while (i != size) 
//     {
//         string tmp = "";
//         cin >> tmp;
//         source.push_back(tmp);
//         i++;
//     }

//     size = 0; i = 0;
//     cin >> size;
//     while (i != size) 
//     {
//         string tmp = "";
//         cin >> tmp;
//         destination.push_back(tmp);
//         i++;
//     }

//     MoveStrings(source, destination);
    
//     return 0;
// }