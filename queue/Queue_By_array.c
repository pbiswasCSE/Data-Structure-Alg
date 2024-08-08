#include <stdio.h>
#include<stdlib.h>


struct Queue{
    int size;
    int fore;
    int back;
    int *arr;

};
int isFull(struct Queue *q){
    if(q->back==q->size-1)return 1;
    else return 0;
}
int isEmpty(struct Queue *q){
    if(q->back==q->fore)return 1;
    else return 0;
}

void enqueue(struct Queue *q,int val){
    if(isFull(q))printf("THe Queue is Overflow");
    else{
            q->back++;
            q->arr[q->back]=val;
        }
}
int dnqueue(struct Queue *q){
    if(isEmpty(q))printf("THe Queue is Underflow");
    else{
            q->fore++;
            return q->arr[q->fore];
        }
}
int main(){
    struct Queue q;
    q.size=3;
    q.fore=-1;
    q.back=-1;
    q.arr=(int *)malloc(q.size *sizeof(int));

    enqueue(&q,15);
    enqueue(&q,17);
    enqueue(&q,12);

    if(isFull(&q))printf("The Queue is full.");
    else if (isEmpty(&q))printf("THe Queue is Empty");



    return 0;
}
