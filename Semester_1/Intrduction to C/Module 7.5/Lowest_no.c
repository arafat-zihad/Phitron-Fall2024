#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int min = INT_MAX;
    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    printf("%d ", min);

    for(int i = 1; i <= n; i++){
        if(arr[i] == min){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}