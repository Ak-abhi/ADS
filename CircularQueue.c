#include<stdio.h>
void enqueue();
void dequeue();
void display();
int isFull();
int isEmpty();
int rear=-1;
int front=-1;
int queue[100],n,x,ch;
void main()
{
    printf("Enter the size of the queue:");
    scanf("%d",&n);
    printf("\n\nQUEUE OPERATIONS\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    do
    {
        printf("\n\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:printf("\nEXIT\n");
            break;
            default:printf("\nPlease enter the valid choice(1/2/3/4)\n");
        }
    }
    while(ch!=4);
    return 0;
}
void enqueue()
{
if(isFull())
    {
        printf("\nQueue is full");
        return;
    }
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the element to be inserted\n");
        scanf("%d",&x);
        rear=(rear+1)%n;
        queue[rear]=x;
        printf("\nElement inserted successfully\n");
    }
}



void dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty");
        return;
    }
    else
    {
        x=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
            else
            {
                front=(front+1)%n;
            }
        printf("Element deleted is %d",x);
    }
}
void display()
{
int i;
    if(isEmpty())
        printf("\nQueue is empty\n");
    else
    {
        for(i=front;i!=rear;i=(i+1)%n)
        {
        printf("%d \t",queue[i]);
        }
    printf("%d",queue[i]);
    }
}
int isEmpty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if((front==0 && rear==n-1)|| (front==rear+1))
        return 1;
    else
        return 0;
}
