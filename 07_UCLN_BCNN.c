#include <stdio.h>
#include <math.h>
void main()
{
    int i,n,m,k,max,uc,bc;
    printf("nhap n\n");
    scanf("%d",&n);
    printf("nhap m\n");
    scanf("%d",&m);
    printf("For-------------------\n");
    max=n;
    if (max<m) max=m;
    for (i=max;i>=1;i--)
    {
            if (m%i==0&&n%i==0)
            {   uc=i;
                printf ("UCLN= %d   \n",uc);
                break;
            }

    }
    bc=m*n/uc;
    printf("BCNN= %d  \n",bc);
    printf("\n");
    printf("while-------------------\n");
i=max;
   while (i>1)
    {
       if (m%i==0&&n%i==0)
            {   uc=i;
                printf ("UCLN= %d   \n",uc);
                break;
            }
            i--;
    }
   bc=m*n/uc;
    printf("BCNN= %d  \n",bc);
    printf("\n");
    printf("Do-While-------------------\n");
    i=max;
    do
    {
       if (m%i==0&&n%i==0)
            {   uc=i;
                printf ("UCLN= %d   \n",uc);
                break;
            }
            i--;
    }
    while (i<=n);
   bc=m*n/uc;
    printf("BCNN= %d  \n",bc);
    printf("\n");

}
