/*
-------- Pattern --------
        * * * * *
         * * * *
          * * *
           * *
            *
           * *
          * * *
         * * * *
        * * * * *

*/

#include<stdio.h>

int main(){
    int i=0,j=0,n,k1,k2;
    printf("Enter the height: ");
    scanf("%d",&n);
    k1=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (j>=k1)
                printf("* ");
            else
                printf(" ");
        }
        k1++;
        printf("\n");
    }
    k2=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (j >= k2)
                printf("* ");
            else
                printf(" ");
        }
        k2--;
        printf("\n");
    }

    return 0;
}
