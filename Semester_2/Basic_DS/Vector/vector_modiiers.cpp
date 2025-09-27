#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 2, 5, 2};
    // vector<int> v2 = v; 
    // for(size_t i = 0; i < v2.size(); i++){
    //     cout << v2[i];
    // }
    // v2.pop_back();
    // v2.erase(v2.begin()+3);
    // v2.erase(v2.begin()+1,v2.begin()+3);
    // v2.insert(v2.begin()+2, 100);

    // replace(v.begin(),v.end(), 2, 100);

    vector<int>:: iterator it = find(v.begin(), v.end(), 140);
    if(it == v.end()){
        cout << "Not Found" <<endl;
    } else{
        cout <<"Found" << endl;
    }

    // for(int i : v){
    //     cout << i << " ";
    // }

    return 0;
}