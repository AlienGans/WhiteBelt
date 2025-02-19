#include <iostream>
using namespace std;

struct LectureTitle // Первая структура, которая будет вложена в другую
{
    string specialization;
    string course;
    string week;
};

struct DetailedLecture // Родовая структура
{
    LectureTitle title;
    int duration;
};

int main()
{
    LectureTitle    title    = {"C++", "White Belt", "3 Week"};
    DetailedLecture lecture1 = {title, 5400};

    DetailedLecture lecture2 = { {"C++", "White Belt", "3 Week"}, 5400};

    cout << lecture2.title.specialization << endl;
    return 0;
}