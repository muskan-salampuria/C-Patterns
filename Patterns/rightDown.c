#include<stdio.h>

int main(){
    int i=0,j=0,n;
    printf("Enter the height: ");
    scanf("%d",&n);
    /*-----------------USING WHILE LOOP----------------*/
    /*while(i<n){
        j=0;
        while(j<n){
             if(j>=i)
                printf("*");
             else
                printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
    */
    /*-----------------USING FOR LOOP----------------*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
