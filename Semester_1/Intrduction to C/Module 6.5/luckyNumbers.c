#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    int b = a / 10;
    int c = a % 10;
    if(c == 0){
        printf("YES\n");
    }
    else if(b == 0){
        printf("NO\n");
    }
    else{
        if(b % c == 0 || c % b == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
    return 0;
}