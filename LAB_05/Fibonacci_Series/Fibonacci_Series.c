#include<stdio.h>
int main()
{
    int n , num1 = 0 , num2 = 1 , nextnum ;
    printf("Vrinda Thakur \nEnter the number of fabonacci series print:");
    scanf("%d", &n);
    printf("Fibonacci series\n");
    for(int i = 1 ; i <= n ; ++i){
        printf("it is num1 %d\n", num1);
        nextnum = num1 + num2 ;
        printf("it is nextnum %d\n", nextnum);
        num1 = num2;
        printf("it is num1 %d\n", num1);
        num2 = nextnum ;
        printf("it is num2 %d\n", num2);
    }
    return 0 ;
}
