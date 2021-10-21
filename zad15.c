// Program treba izracunat sumu n unesenih brojeva.

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Unesi broj: ");
    scanf("%d",&n);

    for(i=1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Suma prvih %d prirodnih brojeva je: %d",n, sum);

    return 0;
}
