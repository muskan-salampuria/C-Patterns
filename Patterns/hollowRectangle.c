#include<stdio.h>

int main(){
    int i=0,j=0,r,c;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);

    /*-----------------USING WHILE LOOP----------------*/
    while(i<r){
        j=0;
        while(j<c){
            if(i==0 || i==r-1 || j==0 || j==c-1)
                printf("* ");
            else
                printf("  ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    /*-----------------USING FOR LOOP----------------*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
               if(i==0 || i==r-1 || j==0 || j==c-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
