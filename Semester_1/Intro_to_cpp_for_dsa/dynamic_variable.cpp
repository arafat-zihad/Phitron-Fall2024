#include <bits/stdc++.h>
using namespace std;
int main(){
    int *p = new int;
    *p = 5;
    cout << *p << endl;
    delete p;
    return 0;
}