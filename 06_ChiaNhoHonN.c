#include <stdio.h>
#include <math.h>
void main()
{
    int i,n,k;
    printf("nhap n\n");
    scanf("%d",&n);
    printf("nhap k\n");
    scanf("%d",&k);
    printf("For-------------------\n");
    for (i=1;i<=n;i++)
    {
            if (i%k==0) printf ("%d   ",i);

    }
    printf("\n");
    printf("while-------------------\n");
    i=1;
   while (i<=n)
    {
        if (i%k==0) printf ("%d   ",i);
        i++;
    }

    printf("\n");
    printf("Do-While-------------------\n");
    i=1;
    do
    { if (i%k==0) printf ("%d   ",i);
        i++;
    }

    while (i<=n);
    printf("\n");
}
