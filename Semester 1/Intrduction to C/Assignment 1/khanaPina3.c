#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", i);
        if(i % 3 == 0 || i % 5 == 0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    
    
    return 0;
}