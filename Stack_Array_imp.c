/*Program for implementation of stacks using arrays*/
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int stack[100]; /*Declaring a 100 element stack array*/
int top = -1;   /*Declaring and initializing the stack pointer*/

void push(int); /*Declaring a function prototype for inserting an element into the stack*/
int pop();      /*Declaring a function prototype for removing an element from the stack*/
void display(); /*Declaring a function prototype for displaying the elements of a stack*/

//Push function
void push(int element)
{
    if (top == 99) //Checking whether the stack is full
    {
        printf("Stack is Full.\n");
        getch();
        exit(1);
    }
    top = top + 1;        /*Incrementing stack pointer*/
    stack[top] = element; /*Inserting the new element*/
}

//Pop function
int pop()
{
    if (top == -1) /*Checking whether the stack is empty*/
    {
        printf("\n\tStack is Empty.\n");
        getch();
        exit(1);
    }
    return (stack[top--]); //Returning the top element and decrementing the stack pointer
}

//Display Function
void display()
{
    int i;
    printf("\n\tThe various stack elements are :\n");
    for (i = top; i >= 0; i--)
        printf("\t % d\n", stack[i]); /*Printing stack elements*/
}


int main()
{
    int choice;
    int num1, num2;
    
    while(1)
    {
        //An interactive interface for performing the various stack operations 
        printf("Select one from the following choices:");
        printf("\n (1) Insert an element into the stack");
        printf("\n (2) Delete an element from the stack");
        printf("\n (3) Display the stack elements");
        printf("\n (4) Exit");
        printf("\n Your choice is:");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("\n\t Enter the element you want to push into the stack:");
                scanf("%d",&num1);
                push(num1);
                break;
            }

            case 2:
            {
                num2= pop();
                printf("\n\t %d element removed from the stack\n\t", num2);
                getch;
                break;
            }
            
            case 3:
            {
                display();
                getch();
                break;
            }

            case 4:
            {
                exit(1);
                break;
            }
        
            default:
            {
            printf("\n Invalid Choise selected\n");
            break; 
            }   
        }
    }
}

