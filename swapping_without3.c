#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number a=");
    scanf("%d",&a);
    printf("enter the number b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\n");
    printf("a=%d\nb=%d",a,b);
    return 0;
}
