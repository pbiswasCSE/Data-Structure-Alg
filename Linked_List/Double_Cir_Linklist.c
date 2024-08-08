#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head;

int main(){
    int choice=0;
    while (choice!=9)
    {
        printf("\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in Beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search\n6.Show\n7.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&choice);  
        switch(choice)
                {  
            case 1: 
            int x;scanf("Enter the Data :%d",&x); 
            head=insert_at_begining(head,x);  
            break;  
            case 2:
            int x;scanf("Enter the Data :%d",&x);   
                   head= insert_at_end(head,x);  
            break;  
            case 3:  
            deletion_beginning();  
            break;  
            case 4:  
            deletion_last();  
            break;  
            case 5:  
            search();  
            break;  
            case 6:  
            display();  
            break;  
            case 7:  
            exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }
    
}

struct Node *insert_at_begining(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    if(head==NULL){
        ptr->data=data;
        ptr->next=ptr;
        ptr->prev=ptr;
        
        return ptr;
    }else {
        head->prev->next=ptr;
        ptr->prev=head->prev;
        ptr->next=head;
        head->prev=ptr;
        return ptr;
    }
}

struct Node *insert_at_end(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

   if (head==NULL)
   {
    ptr->data=data;
        ptr->next=ptr;
        ptr->prev=ptr;
        
        return ptr;
   }else{
    head->prev->next=ptr;
    ptr->prev=head->prev;
    ptr->next=head;
    head->prev=ptr;

    return ptr;
   }



}
