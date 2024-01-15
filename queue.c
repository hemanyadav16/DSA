// implementation of queue using array
/*#include<stdio.h>
#include<stdlib.h>
#define N 5
int front = -1,rear = -1;
int queue[N];
void enqueue()
{
    int item;
    printf("enter the data");
    scanf("%d",&item);
    if (rear == N-1)
    {
        printf("overflow");
    }
    else if (front ==-1 & rear==-1)
    {
        front= rear = 0;
        queue[rear]= item;
    }
    else 
    {
        rear++;
        queue[rear]=item;
    }
}

void dequeue()
{
    int item;
    if(rear==-1)
    {
        printf("underflow");

    }
    else if(front == rear)
    {
        item = queue[front];
        front = rear = -1;
        printf("deleted elem:%d",item);
    }
    else
    {
        item = queue[front];
        front++;
        printf("deleted elem:%d",item);
    }
}

void display()
{
    int i;
    if(rear==-1)
    {
        printf("underflow");

    }
    else{
        for (i = front;i<= rear; i++)
        {
            printf("%d",queue[i]);
        }
    }
}

void peak()
{
    int item;
    if(rear == -1)
    {
        printf("underflow");

    }
    else
    {
        item = queue[front];
            
        printf("deleted elem:%d",item);
    }
}

int main()
{
    int ch; 
    while (1)
    {
        printf("enter choice 1:enoueue  2:dequeue 3:display 4:peak 5:exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();break;
                
            case 2: dequeue();break;
                
            case 3: display();break;
                
            case 4: peak();break;
            case 5: exit(0);break;
                
            default: printf("invalid choice");break;
         
        }
 
        
    } 
    
    
} */


//circular queue implementation using array

#include<stdio.h>
#include<stdlib.h>
#define N 5
int front = -1,rear = -1;
int queue[N];
void enqueue()
{
    int item;
    printf("enter the data");
    scanf("%d",&item);
    if ((rear + 1)% N == front)
    {
        printf("overflow");
    }
    else if (front ==-1 & rear==-1)
    {
        front= rear = 0;
        queue[rear]= item;
    }
    else 
    {
        rear= (rear + 1) % N;
        queue[rear]=item;
    }
}

void dequeue()
{
    int item;
    if(front ==-1 & rear==-1)
    {
        printf("underflow");

    }
    else if(front == rear)
    {
        item = queue[front];
        front = rear = -1;
        printf("deleted elem:%d",item);
    }
    else
    {
        item = queue[front];
        front = (front+1)% N;
        printf("deleted elem:%d",item);
    }
}

void display()
{
    int i= front;
    if(front ==-1 & rear==-1)
    {
        printf("underflow");

    }
    else{
        while(i!= rear )
        {
            printf("%d",queue[i]);
            i= (i+1)%N;
        }
    }
}

void peak()
{
    int item;
    if(front ==-1 & rear==-1)
    {
        printf("underflow");

    }
    else
    {
        item = queue[front];
            
        printf("deleted elem:%d",item);
    }
}

int main()
{
    int ch; 
    while (1)
    {
        printf("enter choice 1:enoueue  2:dequeue 3:display 4:peak 5:exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();break;
                
            case 2: dequeue();break;
                
            case 3: display();break;
                
            case 4: peak();break;
            case 5: exit(0);break;
                
            default: printf("invalid choice");break;
         
        }
 
        
    } 
    
    
}
