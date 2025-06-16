#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++){
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
        
    }
    printf("%d %d", min, max);
    
    
    return 0;
}