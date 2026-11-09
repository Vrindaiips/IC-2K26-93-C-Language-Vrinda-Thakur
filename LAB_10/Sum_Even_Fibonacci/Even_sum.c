#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c, sum = 0;
    printf("Vrinda thakur\n");
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        if(a % 2 == 0)
        {
            sum = sum + a;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nSum of even terms = %d", sum);
    return 0;
}
