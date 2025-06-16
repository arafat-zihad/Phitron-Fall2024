#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("%d\n", sum);
    double ave = (double)sum / n;
    printf("%f\n", ave);

    return 0;
}