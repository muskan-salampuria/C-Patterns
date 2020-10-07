/*
------  Pattern: ------
        * * * * * * *
        * 1 * * * * *
        * 1 2 * * * *
        * 1 2 3 * * *
        * 1 2 3 4 * *
        * 1 2 3 4 5 *
        * * * * * * *
*/
#include<stdio.h>

int main(){
    int i=0,j=0,n;
    printf("Enter the height: ");
    scanf("%d",&n);
    printf("-----------------USING WHILE LOOP----------------\n");
    /*-----------------USING WHILE LOOP----------------*/
    while(i<n){
        j=0;
        while(j<n){
             if(j<=i && j!=0 && i!=n-1)
                printf("%d ",j);
            else
                printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n-----------------USING FOR LOOP----------------\n");

    /*-----------------USING FOR LOOP----------------*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<=i && j!=0 && i!=n-1)
                printf("%d ",j);
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
