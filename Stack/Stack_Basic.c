#include<stdio.h>
#include<stdlib.h>
#define Max 5

int stack_arr[Max];
int first =-1;

int isFull(){
    if (first==Max-1) return 1;
    else return 0;
}    

int isEmpty(){
    if(first==-1)return 1;
    else return 0;
}

void push(int x){

    if(isFull){
        printf("Stacks Overflow");
    }
    
        first+=1;
        for(int i=first;i>0;i--){
            stack_arr[i]=stack_arr[i-1];
        }
        stack_arr[0]=x;
    
}
int pop(){
    if(isEmpty){
        printf("Stcks Underflow");
    }
    int value=stack_arr[first];
    for (int i = 0; i < first; i++)
    {
        stack_arr[i]=stack_arr[i+1];
    }
    first-=1;
    
}
int peek (int x){
    if((first-x+1)<0){
        printf("Invaild Position\n");
        return -1;
    }
    else{
        return stack_arr[first-x+1];
    }
}
void print(){
    if (first==-1)
    {
        printf("Stacks OverFlows");
        exit(1);
    }
    
        for(int i=0;i<=first;i++){
            printf("%d",stack_arr[i]);
            printf("\n");
        }
    
}
int main(){
    int choice,data;
    while (1)
    {
        printf("\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Print The Top Element\n");
        printf("4.Print All the Elements\n");
        printf("5.Quit\n");
        printf("Please enter your choice: \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter the element to be pushed\n");
        scanf("%d",&data);
        push(data);
            break;

        case 2:
        data=pop();
        printf("Deleted Element is %d\n",data);
            break;

        case 3:
        printf("The TopMost Element is %d\n");
        scanf("%d",&data);
        push(data);
            break;  

        case 4:
        print();
        
            break;          
        case 5:
        exit(1);
        
        default:
        printf("Wrong Choice");
            break;
        }
        


    }
    
    }