#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the number in a");
    scanf("%d",&a);
    printf("enter the number in a");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a= %d\nb= %d",a,b);
    return 0;
}