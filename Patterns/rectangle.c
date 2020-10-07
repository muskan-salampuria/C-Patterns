#include<stdio.h>

int main(){
    int i=0,j=0,r,c;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns: ");
    scanf("%d",&c);

    /*-----------------USING WHILE LOOP----------------*/
    /*while(i<r){
        j=0;
        while(j<c){
                printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    */
    /*-----------------USING FOR LOOP----------------*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
