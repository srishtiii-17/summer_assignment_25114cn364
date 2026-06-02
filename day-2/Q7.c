#include <stdio.h>
int main (){
    int a,b,product=1;
    printf("enter a number");
    scanf("%d", &a);
    while (a!=0){
        b=a%10;
        product=product * b;
        a=a/10;
    }
    printf("product is %d", product);
    return 0;
}