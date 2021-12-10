#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int queue[100]; //declaring a 100 element Queue array
int front = -1; //initializing the front pointer
int rear = -1;  // initializing the rear pointer
void insert(int);
int delete ();
void display();

//Insert Function
void insert(int value)
{
    if (front == -1) //inserting elements into an empty queue 
    {
        front = rear = front + 1;
        queue[front] = value;
        return;
    }

    if (rear == 99) //that is,the queue is full
    {
        printf("Element can't be inserted! The queue is full");
        getch();
        return;
    }
    rear = rear + 1;
    queue[rear] = value;
}

//Delete Function
int delete ()
{
    int i; //i will store the deleted value
    if (front == -1 && rear == -1) //i.e. the queue is empty
    {
        printf("The queue is empty; no elements to delete");
        return(-9999);
    }
    if (front != -1 && front == rear) // the queue has only one element
    {
        i = queue[front];
        front = -1;
        rear = -1;
        return (i);
    }
    i = queue[front];
    front = front + 1;
    return (i);
}

//Displaying the stack elements
void display()
{
    int i;
    if (front == -1)
    {
        printf("The queue is empty");
        return;
    }
    printf("The elements of the queue are:\n");
    for(i = front; i <= rear; i++)
        {
            printf("%d \t", queue[i]); /*Printing queue elements*/
        }
}

int main()
{
    int num1 = 0, num2 = 0;
    int choice;

    while (1)
    {
        //An interactive interface for performing the various stack operations
        printf("\nSelect one from the following choices:");
        printf("\n (1) Insert an element into the queue");
        printf("\n (2) Delete an element from the queue");
        printf("\n (3) Display the queue elements");
        printf("\n (4) Exit");
        printf("\n Your choice is:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n\t Enter the element you wan to push into the stack:");
            scanf("%d", &num1);
            insert(num1);
            break;
        }

        case 2:
        {
            num2 = delete ();
            printf("\n\t %d element removed from the stack\n\t", num2);
            getch;
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            exit(1);
            break;
        }

        default:
        {
            printf("\n Invalid Choice selected\n");
            break;
        }
        }
    }
}
