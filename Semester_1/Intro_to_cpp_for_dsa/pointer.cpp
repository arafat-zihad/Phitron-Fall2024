#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 20;
    int *ptr = &a;
    // cout << &a << endl;
    cout << ptr << endl; // pointer of a ptr, stored address of a.
    // Dereferancing 
    cout << *ptr << endl;
    return 0;
}