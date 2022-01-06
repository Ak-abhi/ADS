#include<stdio.h>
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;
int queue[100],n,ch;
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
    int item;
    if(rear==n-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (front==-1)
        {
            front=0;
        }
            printf("Insert the element in queue : \n");
            scanf("%d", &item);
            rear=rear+1;
            queue[rear]=item;
            printf("Element inserted successfully\n");

    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("Element deleted is %d\t\n",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1||front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The elements in the queue is \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}

