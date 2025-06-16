#include <stdio.h>
int main(){
    char x, ch;
    scanf("%c", &x);
    if(x == 122){
        printf("a\n");
    }
    else{
        ch = x + 1;
    printf("%c\n", ch);
    }
    
    
    
    return 0;
}