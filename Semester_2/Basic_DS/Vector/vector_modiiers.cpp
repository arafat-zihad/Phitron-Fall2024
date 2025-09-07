#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = v; 
    // for(size_t i = 0; i < v2.size(); i++){
    //     cout << v2[i];
    // }
    for(int i : v2){
        cout << i << " ";
    }
    return 0;
}