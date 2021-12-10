/*Program for implementing queue using linked list*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct queue /*Declaring the structure for queue elements*/
{
    int element;
    struct queue *next; /*Queue element pointing to another queue element*/
};
struct queue *front = NULL;
struct queue *rear = NULL;

void insert(int);   /*Declaring a function prototype for adding an element into the queue*/
int del();          /*Declaring a function prototype for removing an element from the queue*/
void display(void); /*Declaring a function prototype for displaying the elements of the queue*/

void main()
{
    int num1, num2, choice;
    while (1)
    {
                //An interactive interface for performing the various stack operations
                printf("Select one from the following choices:");
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
                    printf("\n\t Enter the element you wan to insert into the queue:");
                    scanf("%d", &num1);
                    insert(num1);
                    break;
                }

                case 2:
                {
                    num2 = del ();
                    printf("\n\t %d element removed from the queue\n\t", num2);
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

        /*Insert function*/
        void insert(int value)
        {
            struct queue *ptr = (struct queue *)malloc(sizeof(struct queue)); /*Dynamically declaring a queue element*/
            ptr->element = value; /*Assigning value to the newly allocated queue element*/
            if (front == NULL) /*Adding element in an empty queue*/
            {
                front = rear = ptr;
                ptr->next = NULL;
            }
            else
            {
                rear->next = ptr;
                ptr->next = NULL;
                rear = ptr;
            }
        }

        /*Delete function*/
        int del()
        {
            int i;
            if (front == NULL) /*Checking whether the queue is empty*/
                return (-9999);
            else
            {
                i = front->element; /*removing element from the start*/
                front = front->next;
                return (i);
            }
        }

        /*Display function*/
        void display()
        {
            struct queue *ptr = front;
            if (front == NULL)
            {
                printf("\n Queue is empty");
                return;
            }
            else
            {
                printf("Elements in the queue are:\n");
                while (ptr != rear)
                {
                    printf("\t %d", ptr->element);
                    ptr = ptr->next;
                }
                printf("\t %d", rear->element);
            }
        }