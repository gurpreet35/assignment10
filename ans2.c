// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple_interest(float ,float ,float );
int main(){
    float principle_amount,rate,time,si;
    printf("Enter Principle amount:");
    scanf("%f",&principle_amount);
    printf("Enter Rate:");
    scanf("%f",&rate);
    printf("Enter Time:");
    scanf("%f",&time);
    si=simple_interest(principle_amount,rate,time);
    printf("Area of circle is: %0.2f",si);
    return 0;
}
float simple_interest(float p,float r,float t){
    float s;
    s=(p*r*t)/100;
    return s;
}