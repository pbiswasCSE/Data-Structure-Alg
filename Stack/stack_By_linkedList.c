#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *top){
    if(top==NULL)return 1;
    else return 0;
    }

  int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)return 1;
    else return 0;
  }

struct Node *push(struct Node *top,int data){
    if(isFull(top))printf("Stack is Overflow");
    else{
        struct Node *p=(struct Node *)malloc(sizeof(struct Node));
        p->data=data;
        p->next=top;
        top=p;
        return top;
    }
}
int pop(struct Node* *top){
    if(isEmpty(*top)){printf("Stack is Underflow");}
        else {
            struct Node *n=*top;
            *top=(*top) -> next;
            int x=n->data;
            free(n);
            return x;
        }
}

void Stack_Traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }

}
int main(){
    struct Node *top=NULL;
    top=push(top,78);
    top=push(top,7);
    top=push(top,8);
    Stack_Traversal(top);
    int element=pop(&top);
    printf("Popped Elemnt is :%d\n",element);
    Stack_Traversal(top);

    return 0;

}
