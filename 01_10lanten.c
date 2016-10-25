#include <stdio.h>
void main()
{
    int i;
    printf("For-------------------\n");
    for (i=1;i<=10;i++)
        printf("%d.TEN Toi\n",i);
    printf("while-------------------\n");
    i=1;
    while (i<=10)
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
    while (i<=10);
}
