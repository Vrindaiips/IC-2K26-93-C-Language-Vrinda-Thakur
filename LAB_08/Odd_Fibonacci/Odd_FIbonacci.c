int main()
{
    int n, i, a = 0, b = 1, c;
    printf("Vrinda Thakur\n");
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(a % 2 != 0)
        {
            printf("%d ", a);
        }
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
