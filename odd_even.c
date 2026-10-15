#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is an EVEN",num);
    }
    else{
        printf("%d is an ODD",num);
    }
    return 0;
}