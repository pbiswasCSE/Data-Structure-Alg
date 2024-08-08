#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};

void linklistTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
    }

}

//Deletion First Node
struct Node *Dele_at_First(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);

    return head;
}

//Deletion In the End Node
struct Node *Dele_at_End(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
    p=p->next;
    q=q->next;
    }
    p->next=NULL;
    free(q);

    return head;
}

//Deletion at a Index
struct Node *Dele_at_Index(struct Node *head,int Index){
    struct Node *p=head;
    struct Node *q=head->next;
   for (int i = 0; i < Index-1; i++)
   {
  p=p->next;
  q=q->next;
   }
   
    p->next=q->next;
    free(q);
    return head;
}


struct Node *Dele_Node_given_Value(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->data!=value && q->next!=NULL){
     p=p->next;
     q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
    
}
int main(){

struct Node *head;
struct Node *first;
struct Node *second;
struct Node *Third;
struct Node *Fourth;

head= (struct Node *)malloc(sizeof(struct Node));
first= (struct Node *)malloc(sizeof(struct Node));
second= (struct Node *)malloc(sizeof(struct Node));
Third= (struct Node *)malloc(sizeof(struct Node));
Fourth= (struct Node *)malloc(sizeof(struct Node));

head ->data=2;
head ->next=first;

first ->data=3;
first ->next=second;

second ->data=3;
second ->next=Third;

Third ->data=8;
Third ->next=Fourth;

Fourth ->data=10;
Fourth ->next=NULL;

linklistTraversal(head);

head =Dele_at_First(head);
printf("After Delete First :");
linklistTraversal(head);

head =Dele_at_End(head);
printf("After Delete the End:");
linklistTraversal(head);

head =Dele_at_Index(head,2);
printf("After Delete the At a given Index;");
linklistTraversal(head);

return 0;


}