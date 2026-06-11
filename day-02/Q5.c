#include <stdio.h>
int main(){
    int a,b, sum=0;
    printf("enter a number");
    scanf("%d", &a);
    while (a!=0){
        b=a%10;
        sum+=b;
        a=a/10;
    }
    printf("%d", sum);
    return 0;
}