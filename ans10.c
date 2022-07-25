// Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
void prime_factor(int);
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d", &x);
    prime_factor(x);
    return 0;
}
void prime_factor(int n)
{
    int flag = 0;
    while (n % 2 == 0)
    {
        printf("2 ");
        n = n / 2;
    }
    for (int i = 3; i <=n; i = i + 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
        if (n > 2)
        {
            printf("%d ", n);
        }
}