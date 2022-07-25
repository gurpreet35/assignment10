/* Write a function to check whether a given number contains a given digit or not. (TSRS) */
#include<stdio.h>
int digit_checker(int ,int);
int main(){
    int x,y;
    printf("Enter the Number:");
    scanf("%d",&x);
    printf("Enter the digit(0-9):");
    scanf("%d",&y);
    if(digit_checker(x,y)==1){
        printf("%d contains a given %d",x,y);
    }
    else
        printf("%d does not contains a given %d",x,y);
    return 0;
}
int digit_checker(int n,int digit){
    int r,flag=0;
    while(n>0){
    r=n%10;
    if(digit==r){
     flag=1;
    }
    n=n/10;
    }
    return flag;
    }

