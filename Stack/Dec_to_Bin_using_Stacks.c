#include<stdio.h>
#include<stdlib.h>
#define MAX 50

int stacks[MAX];
int top=-1;

void Dec2Bin(int n){
    while (n!=0)
    {
        push(n%2);
        n=n/2;
        
    }
    
}
int isFull(){
    if (top==MAX-1) return 1;
    else return 0;
}    

int isEmpty(){
    if(top==-1)return 1;
    else return 0;
}

void push(int x){

    if(isFull){
        printf("Stacks Overflow");
    }
    
        top+=1;
        for(int i=top;i>0;i--){
            stacks[i]=stacks[i-1];
        }
        stacks[0]=x;
    
}
int pop(){
    if(isEmpty){
        printf("Stcks Underflow");
    }
    int value=stacks[top];
    for (int i = 0; i < top; i++)
    {
        stacks[i]=stacks[i+1];
    }
    top-=1;
    
}
void print(){
    if (top==-1)
    {
        printf("Stacks OverFlows");
        exit(1);
    }
    
        for(int i=0;i<=top;i++){
            printf("%d",stacks[i]);
            printf("\n");
        }
    
}
int main(){
    int num;
    scanf("Enter the Number:%d",&num);
    Dec2Bin(num);
    print();
    return 0;
}