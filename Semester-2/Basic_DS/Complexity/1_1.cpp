#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int sum = 0;
    
    //calculate 1 to n using loog
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Using loop " << sum << endl;


    //using formula 
    int fsum = (n*(n+1))/2;
    cout << "Using formula " << fsum << endl;
    return 0;
}