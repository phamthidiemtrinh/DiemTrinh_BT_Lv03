#include <stdio.h>
#include <math.h>
void main()
{
    int i,n,j,t;
    printf("nhap n\n");
    scanf("%d",&n);
    printf("For-------------------\n");
    for (i=2;i<=n;i++)
    { t=0;
        if (i==2||i==3) printf ("%d  ",i);
        else if (i>3)
        {
            for (j=2;j<=(int)(i/2);j++)
                if (i%j==0) t=1;
            if (t==0) printf ("%d   ",i);

        }
    }
    printf("\n");
    printf("while-------------------\n");
    i=2;
    while (i<=n)
    { t=0;
        if (i==2||i==3) printf ("%d  ",i);
        else if (i>3)
        {
            for (j=2;j<=(int)(i/2);j++)
                if (i%j==0) t=1;
            if (t==0) printf ("%d   ",i);

        }
        i++;
    }

    printf("\n");
    printf("Do-While-------------------\n");
    i=1;
    do
    { t=0;

        if (i==2||i==3) printf ("%d  ",i);
        else if (i>3)
        {
            for (j=2;j<=(int)(i/2);j++)
                if (i%j==0) t=1;
            if (t==0) printf ("%d   ",i);

        }
        i++;
    }

    while (i<=n);
    printf("\n");
}
