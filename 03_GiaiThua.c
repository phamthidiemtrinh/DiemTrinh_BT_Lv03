#include <stdio.h>
void main()
{
    int i,n,gt;
    printf("nhap n");
    scanf("%d",&n);
    gt=1;
    printf("For-------------------\n");
    for (i=1;i<=n;i++)
        gt=gt*i;
        printf("%d!=%d",n,gt);
    printf("\n");
    printf("while-------------------\n");
    i=1;
    gt=1;
    while (i<=n)
    {
         gt=gt*i;
        i++;
    }
    printf("%d!=%d",n,gt);
    printf("\n");
    printf("Do-While-------------------\n");
    i=1;

    gt=1;
    do
    { gt=gt*i;
      i++;

    }
    while (i<=n);
        printf("%d!=%d",n,gt);
    printf("\n");
}
