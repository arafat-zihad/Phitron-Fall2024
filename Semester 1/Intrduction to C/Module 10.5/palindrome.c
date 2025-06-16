#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int brr[n];

    // int rever = 0;

    for(int i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = n-1; i >= 0; i--){
        brr[i] = arr[i];
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", brr[i]);
    }
    // for(int i = 0; n != 0; i++){
    //     remin = n % 10;
    //     rever = rever * 10 + remin;
    //     n = n / 10;
    // }
    return 0;
}