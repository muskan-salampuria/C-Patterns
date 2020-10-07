/*
------- Pattern ------
           *
          * *
         * * *
        * * * *
       * * * * *

*/
#include<stdio.h>

int main(){
    int i=0,j=0,n,k;
    printf("Enter the height: ");
    scanf("%d",&n);
    k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (j >= k)
                printf("* ");
            else
                printf(" ");
        }
        k--;
        printf("\n");
    }

    return 0;
}
