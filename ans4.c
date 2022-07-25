//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural_number(int);
int main(){
    int y;
    printf("Enter the Number:");
    scanf("%d",&y);
    natural_number(y);
    return 0;
}
void natural_number(int x){
    for (int  i = 1; i <=x; i++)
    {
        printf(" %d",i);
    }
}