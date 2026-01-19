#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};
int main(){
    Student arafat(10, 33, 4.67);
    Student *mahdi = new Student (10, 27, 4.79); // Dynamic Object

    cout << arafat.cls <<" " <<arafat.roll << " " << arafat.gpa << endl;
    cout << (*mahdi).cls <<" " <<mahdi->roll << " " << (*mahdi).gpa << endl;

    return 0;
}