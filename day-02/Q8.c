#include <stdio.h>
int main (){
    int a, b, original, reverse=0;
    printf("enter a number");
    scanf("%d", &a);
    original=a;
    while(a!=0){
        b=a%10;
        reverse=reverse * 10 + b;
        a=a/10;
    }
    if (original==reverse){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}