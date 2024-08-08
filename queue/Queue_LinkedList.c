#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};
void enqueue(struct Node *f,struct Node *b,int val){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==Null){
        printf("The Queue is full");
    }else if(f==NULL&&b==NULL){
        f=b=ptr;
        ptr->data=val;
    }
}




int main(){

struct Node *fore=NULL;
struct Node *back=NULL;

return 0;


}
