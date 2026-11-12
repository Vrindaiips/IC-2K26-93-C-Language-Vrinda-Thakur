#include <stdio.h>
int main()
{
    int n, t, rem, sum = 0;
    printf(" Vrinda Thakur\n Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        rem = t % 10;
        sum = sum + rem * rem * rem;
        t = t / 10;
    }
    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    return 0;
}
