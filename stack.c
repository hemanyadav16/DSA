#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top = -1;
void push()
{
    int item ;
    printf("enter data");
    scanf("%d",&item);
    if (top == N-1)
    {
        printf("overflow can't push item");
    }
    else
    {
        top++;
        stack[top]= item;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("underflow,stack is empty");
    }
    else
    {
        item = stack[top];
        top--;
        printf("popped element:%d",item);
    }
}
void peek()
{
    int item;
    if (top == -1)
    {
        printf("underflow,stack is empty");
    }
    else
    {
        item = stack[top];
        
        printf("peak element:%d",item);
    }
}

void display()
{
    if (top == -1)
    {
        printf("underflow,stack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }

    }
}

int main()
{
    int ch; 
    while (1)
    {
        printf("enter choice 1:push  2:pop  3:display  4:peek");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();break;
                
            case 2: pop();break;
                
            case 3: display();break;
                
            case 4: peek();break;
            case 5: exit(0);break;
                
            default: printf("invalid choice");break;
         
        }
 
        /* code */
    } 
    
    
}