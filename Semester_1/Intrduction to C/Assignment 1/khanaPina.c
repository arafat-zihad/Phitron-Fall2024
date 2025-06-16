#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x >= 1000){
        printf("Three Kacchi\n");
    }
    else if(x >= 500){
        printf("One Large Pizza\n");
    }
    else if( x <= 500 && x >= 250){
        printf("Three Small Burger\n");
    }
    else if(x >= 100){
        printf("Three Fuchka\n");
    }
    else{
        printf("Nothing\n");
    }
    return 0;
}