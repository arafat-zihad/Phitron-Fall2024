#include <bits/stdc++.h>
using namespace std;
int main(){
    int *n = new int;
    cin >> *n;

    int *a = new int [*n];

    for(int i = 0; i < *n; i++){
        cin >> a[i];
    }

    int max = 0;

    for(int i = 0; i < *n; i++){
        if (a[i] > max)
        {
            max = a[i];
        }
        
    }
    cout << max << endl;

    
    return 0;
}