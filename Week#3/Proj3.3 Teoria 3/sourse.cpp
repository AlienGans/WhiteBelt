#include <iostream>
using namespace std;

int ComputeDistance(const string& sourse, const string& destination)
{
    return 1;
}

class Route
{
    public:
    string GetSourse() {return sourse;}
    string GetDestination() {return destination;}
    int    GetLength() {return length;}

    void SetSourse(const string& new_sourse)
    {
        sourse = new_sourse;
        UpdateLength();
    }
    void SetDestination(const string& new_destination)
    {
        destination = new_destination;
        UpdateLength();
    }

    private:
    void UpdateLength()
    {
        length = ComputeDistance(sourse, destination);
    }
    
    string sourse;
    string destination;
    int length;
};



int main()
{
    Route route;
    route.SetSourse("Moscow");
    route.SetDestination("Piter");
    
    cout << "Route from " << 
            route.GetSourse() << " to " <<
            route.GetDestination() << " is " <<
            route.GetLength() << " meters long"; 
    return 0;
}