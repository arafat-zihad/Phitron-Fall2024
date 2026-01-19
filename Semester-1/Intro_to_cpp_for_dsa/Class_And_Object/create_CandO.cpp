#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student a;
    a.roll = 52;
    a.gpa = 3.85;
    char temp[100] = "Zihad"; //We can't directly print string string
    strcpy(a.name, temp);
    
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}