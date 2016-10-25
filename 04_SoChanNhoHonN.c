#include <stdio.h>
void main()
{
    int i,n;
    printf("nhap n");
    scanf("%d",&n);
    printf("For-------------------\n");
    for (i=0;i<=n;i+=2)
        printf("%d   ",i);
    printf("\n");
    printf("while-------------------\n");
    i=0;
    while (i<=n)
    {
        printf("%d   ",i);
        i+=2;
    }

    printf("\n");
    printf("Do-While-------------------\n");
    i=0;
    do
    { printf("%d  ",i);
      i+=2;

    }
    while (i<=n);
    printf("\n");
}
