#include <stdio.h>
#include <math.h>
void main()
{
    int n,d,i,x,un,sn,t,j;
    printf("nhap n\n");
    scanf("%d",&n);
    printf("nhap d \n");
    scanf("%d",&d);
    printf("nhap Uo \n");
    scanf("%d",&x);
    sn=0;
    t=1;;
    printf("For-------------------\n");
    for (i=1;i<=n;i++)
    {
        un=x*t;
        sn+=un;
        t=t*d;

    }

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);
printf("while-------------------\n");
sn=0;
i=0;
t=1;
   while (i<n)
    {    un=x*t;
        sn+=un;
        i++;
        t=t*d;
    }

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);
    printf("\n");
    printf("Do-While-------------------\n");
    sn=0;
    i=0;
    t=1;
    do
     {   un=x*t;
        sn+=un;
        i++;
        t=t*d;
     }
    while (i<n);

    printf ("U%d = %d\n",n,un);
    printf("S%d = %d\n",n,sn);

}
