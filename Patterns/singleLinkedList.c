#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;

void insertBeg();
void insertEnd();
void deleteBeg();
void display();
void search();

int main(){
    int choice;
    while(choice!=9)
    {
    printf("\n--------Menu Driven Single Linked List------------");
    printf("Choose the Operation:\n 1.Insert At Begining\n 2. Insert at the End\n 3.Delete from Begining\n 4.Display\n 5.Search\n 9.Exit\n");
    scanf("%d",&choice);
        switch(choice){
            case 1: insertBeg();
            break;
            case 2: insertEnd();
            break;
            case 3:deleteBeg();
            break;
            case 4: display();
            break;
            case 5: search();
            break;
            case 9: exit(0);
            default: printf("Please enter a Valid choice");
        }
    }
    return 0;
}
void insertBeg(){
    int item;
    struct node *ptr;
   ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr==NULL)
        printf("OverFlow");
    else{
        printf("Enter the item: ");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\n Node Inserted \n");
    }
}

void insertEnd(){
     int item;
    struct node *ptr,*temp;
   ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr==NULL)
        printf("OverFlow");
    else{
        printf("Enter the item: ");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL){
            ptr->next=head;
            head=ptr;
            printf("\n Node Inserted \n");
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=NULL;
            printf("\n Node Inserted \n");
        }
    }
}

void deleteBeg(){
    struct node *ptr;
   if(head==NULL){
       printf("List is Empty");
   }
   else{
       ptr=head;
       head=ptr->next;
       free(ptr);
       printf("Node Deleted");
   }
}

void display(){
    struct node *ptr;
     if(head==NULL){
       printf("List is Empty");
   }
   else{
       ptr=head;
       while(ptr!=NULL)
       {
           printf("%d ",ptr->data);
           ptr=ptr->next;
       }
   }
}

void search(){
    int item;
    struct node *temp;
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    temp=head;
    while(temp->next!=NULL){
        if(temp->data==item){
            printf("Data Found");
            break;
        temp=temp->next;
        }
    }
}
