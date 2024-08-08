#include <stdio.h>
#include<stdlib.h>


struct Circular_Queue{
    int size;
    int fore;
    int back;
    int *arr;

};
int isFull(struct Circular_Queue *q){
    if((q->back+1)%q->size==q->fore)return 1;
    else return 0;
}
int isEmpty(struct Circular_Queue *q){
    if(q->back==q->fore)return 1;
    else return 0;
}

void enqueue(struct Circular_Queue *q,int val){
    int x= (q->back+1)%q->size;
    if(x==q->fore)printf("THe Queue is Overflow");
    else{
            q->back=x;
            q->arr[q->back]=val;
        }
}
int dequeue(struct Circular_Queue *q){
    if(isEmpty(q))printf("THe Queue is Underflow");
    else{
            q->fore=(q->fore+1)%q->size;;
            return q->arr[q->fore];
        }
}
int main(){
    struct Circular_Queue q;
    q.size=4;
    q.fore=0;
    q.back=0;
    q.arr=(int *)malloc(q.size *sizeof(int));

    enqueue(&q,15);
    enqueue(&q,17);
    enqueue(&q,12);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    if(isFull(&q))printf("The Queue is full.");
    else if (isEmpty(&q))printf("THe Queue is Empty");



    return 0;
}