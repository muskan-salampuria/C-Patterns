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
             if(j==(n-1-i) || j==n-1 || i==n-1)
                printf("* ");
            else
                printf("  ");
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
            if(j==(n-1-i) || j==n-1 || i==n-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
