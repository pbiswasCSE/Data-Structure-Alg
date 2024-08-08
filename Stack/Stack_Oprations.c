
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
    if(isEmpty(*top))printf("Stack is Underflow");
        else{
            struct Node *n=*top;
            *top=(*top) -> next;
            int x=n->data;
            free(n);
            return x;
        }
}

int Stack_peek(int pos,struct Node *top){
    struct Node *ptr=top;
    for (int i=0; i<pos-1&&ptr!=NULL;i++) {
        ptr=ptr->next;
    }
    if(ptr!=NULL){
    return ptr->data;
    }
    else{
        return -1;
    }
}
int stack_top(struct Node *top){
    struct Node *ptr=top;
    return ptr->data;
}
int stack_bottom(struct Node *top){
    struct Node *ptr=top;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
    return ptr->data;
    }
    else{
        return -1;
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
    top=push(top,9);
    top=push(top,69);
    top=push(top,27);

    Stack_Traversal(top);
    printf("The Element is: %d\n",Stack_peek(2,top));
    printf("The Top Element is: %d\n",stack_top(top));
    printf("The Bottom Element is: %d\n",stack_bottom(top));
    //Stack_Traversal(top);

    return 0;

}
