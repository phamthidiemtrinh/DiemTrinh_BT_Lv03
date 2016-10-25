#include <stdio.h>
#include <math.h>
void main()
{
    int n,d,i,x,un,sn;
    printf("nhap n\n");
    scanf("%d",&n);
    printf("nhap d \n");
    scanf("%d",&d);
    printf("nhap Uo \n");
    scanf("%d",&x);
    sn=0;
    printf("For-------------------\n");
    for (i=0;i<n;i++)
    {    un=x+i*d;
        sn+=un;

    }

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);
printf("while-------------------\n");
sn=0;
i=0;
   while (i<n)
    {    un=x+i*d;
        sn+=un;
        i++;
    }

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);
    printf("\n");
    printf("Do-While-------------------\n");
    sn=0;
    i=0;
    do
     {   un=x+i*d;
        sn+=un;
        i++;
     }
    while (i<n);

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);

}
