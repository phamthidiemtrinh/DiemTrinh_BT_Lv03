#include <stdio.h>
void main()
{
    int i,n;
    printf("nhap so lan =");
    scanf("%d",&n);
    printf("For-------------------\n");
    for (i=1;i<=n;i++)
        printf("%d.TEN Toi\n",i);
    printf("while-------------------\n");
    i=1;
    while (i<=n)
    {
        printf("%d.TEN Toi\n",i);

        i++;
    }
    printf("Do-While-------------------\n");
    i=1;
    do
    {
        printf("%d.TEN Toi\n",i);
        i++;
    }
    while (i<=n);
}
