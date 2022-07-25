//. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main(){
    int y;
    printf("Enter the Number:");
    scanf("%d",&y);
    printf("Factorial is %d", fact(y));
    return 0;
}
int fact(int x){
    int fact=1;
    for (int  i = 1; i <=x; i++)
    {
       fact=i*fact;
    }
    return fact; 
}