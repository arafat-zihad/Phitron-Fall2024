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
    Student mahi (10, 27, 4.79);

    cout << arafat.cls <<" " <<arafat.roll << " " << arafat.gpa << endl;
    cout << mahi.cls <<" " <<mahi.roll << " " << mahi.gpa << endl;

    return 0;
}