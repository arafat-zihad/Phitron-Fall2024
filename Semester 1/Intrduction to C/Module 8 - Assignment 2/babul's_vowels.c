#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);

    if(a == 97 || a == 101 ||a == 105||a==111||a==117){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }
    return 0;
}