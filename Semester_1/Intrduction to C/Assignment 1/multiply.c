#include <stdio.h>
int main(){
    long long int x, y;
    scanf("%lld %lld", &x, &y);
    long long int total = x * y;
    printf("%lld\n", total);
    return 0;
}