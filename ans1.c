//Write a function to calculate the area of a circle (TSRS)
#include<stdio.h>
 float area(float);
int main(){
    float r;
    printf("Enter the value of radius of circle:");
    scanf("%f",&r);
    area(r);
    printf("Area of circle is: %0.2f",area(r));
    return 0;
}
float area(float radius){
    float area;
    area=3.14*radius*radius;
    return area;
}
