#include <iostream>
using namespace std;

struct Lecture 
{
    string title;
    int duration;
    string author;
};

void PrintLecture(const Lecture& lecture)
{
    cout << 
        "Title: " << lecture.title << endl <<
        "Duration: " << lecture.duration << endl <<
        "Author: " << lecture.author << endl;
}

int main()
{
    Lecture one;
    one.title = "OOP";
    one.duration = 5400;
    one.author = "Anton";

    Lecture two = {"OOP", 5800, "Semyon"};

    PrintLecture(one);
    cout << endl;
    PrintLecture(two);

    return 0;
}