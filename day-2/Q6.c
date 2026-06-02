#include <stdio.h>
int main(){
    int a,b,reverse=0;
    printf("enter the number to be reversed");
    scanf("%d", &a);
    while(a!=0){
        b=a%10;
        reverse=reverse * 10 + b;
        a=a/10;
    }
    printf("reversed number is %d", reverse);
    return 0;
}