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

Student* fun(){
    Student *mahi = new Student (10, 27, 4.79);
    return mahi;
}
int main(){
    Student arafat(10, 33, 4.67);
    // Student mahi (10, 27, 4.79);
    Student *p = fun();

    cout << arafat.cls <<" " <<arafat.roll << " " << arafat.gpa << endl;
    cout << (*p).cls <<" " <<(*p).roll << " " << p->gpa << endl; //Dynamic 

    return 0;
}