#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("Vrinda Thakur\n");
    printf("enter the three numbers:");
    scanf("%d %d %d" , &a , &b , &c);

    if(a>=b && a>=c) {
     printf("%d is the largest number\n", a);
    }
      else
         if(b>=a && b>=c) {
          printf("%d is the largest number\n", b);
    }  
      else {
          printf("%d is the larget number\n",c);
    }
    return 0 ;

}
