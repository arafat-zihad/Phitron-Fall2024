#include <bits/stdc++.h>
using namespace std;
int main(){
    int *n = new int;
    cin >> *n;

    int *a = new int[*n];

    for(int i = 0; i < *n; i++){
        cin >> a[i];
    }

    // swap(a[0], a[n-1]);

    for(int i = *n-1; i >= 0; i--){
        cout << a[i] <<" ";
    }
    return 0;
}

