//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include <bits/stdc++.h>
using namespace std;
void foo(vector<int>a, vector<int>b){
    vector<int>c;
    int size = a.size()+ b.size();
    for(size_t i = 0; i < b.size(); i++){

        //  c.insert(c.end(), b.begin(), b.end())
        c.push_back(b[i]);
    }
    for(int i = 0; i < size; i++){
        // c.insert(c.end(), a.begin(), a.end());
        c.push_back(a[i]);

    }
    for(int i = 0; i < size; i++){
        cout << c[i] << " ";
    }
    cout<< endl;
    return;
}
int main(){
    int n; cin >> n;

    vector<int>a(n);
    for(int i = 0; i <n; i++){
        cin >> a[i]; 
    }

    vector<int>b(n);
    for(int i = 0; i <n; i++){
        cin >> b[i]; 
    }

    foo(a, b);
    return 0;
}