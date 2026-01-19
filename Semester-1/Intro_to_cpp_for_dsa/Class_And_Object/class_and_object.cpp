#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student GroupA;
    GroupA.roll = 29;
    GroupA.gpa = 3.59;
    char temp[100] = "Rakib";
    strcpy(GroupA.name, temp);

    cout << GroupA.name <<" " <<GroupA.roll<< " " <<GroupA.gpa <<endl;
    return 0;
}