#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
            // break;
        }
    }
    for(int i = 0; i < n; i++){
        arr[i] = max - arr[i];
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    // printf("%d ", max);
    return 0;
}