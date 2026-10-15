#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter the principal");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%f",&t);
    float si = (p*r*t)/100;
    printf("simple intrest : %f",si);
    return 0;

}