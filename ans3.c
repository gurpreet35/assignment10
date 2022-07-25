/* Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS) */
#include<stdio.h>
int number(int);
int main(){
    int  x;
    printf("Enter the Number:");
    scanf("%d",&x);
    number(x);
    printf("%d",number(x));
    return 0;
}
int number(int num){
    if (num%2==0){
    return 1;
    }
    else{ 
    return 0;
    }
}