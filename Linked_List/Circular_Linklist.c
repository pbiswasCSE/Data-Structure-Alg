#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};

void linklistTraversal(struct Node *Head){
    struct Node *ptr=Head;
    do{
        printf("Element is :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr->next != Head);

}

struct Node * insert_At_First( struct Node *head,int Data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=Data;

    struct Node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return ptr;

}

/*struct Node * insert_at_Index(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;

    return head;
}

struct Node *insert_at_End(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;

    return head;
}

struct Node *insert_after_Node(struct Node *head,struct Node *prevnode ,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;

    return head;
}*/


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
Fourth ->next=head;

linklistTraversal(head);
head =insert_At_First(head,80);
linklistTraversal(head);


return 0;


}