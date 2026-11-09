#include <stdio.h>
int main() {
    int a;
    printf("Vrinda Thakur\n");
    printf("Enter your number");
    scanf("%d",&a);
    if (a%3==0&&a%5!=0)
        printf("The number is fulfilling the condition");
    else
        printf("It doesn't fulfil the condition");
    return 0;
}
