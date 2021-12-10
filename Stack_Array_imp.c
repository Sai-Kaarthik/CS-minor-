#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int Stack[100]; //declaring a 100 element stck array
int top=-1; //declaring and initialising the stack pointer
void push(int); //declaring a function for inserting an element into the stack
int pop(); //declaring a function for reading or deleting an element from the stack 
void dispay(); //declaring a funtion for displaying the stack elements

//Push Function
void push(int element)
{
    if(top==99)
    {
        printf("Stack is full\n");
        getch;
        exit(1);
    }
    top=top+1;
    Stack[top]= element;
}

//Pop Function
int pop()
{
    if (top==-1)
    {
        printf("The stack is empty, no element can be removed");
        getch();
        exit(1);
    }
    return(Stack[top]);
    top=top--;
}

//Displaying the stack elements
void display()
{
    int i;
    printf("\n\t The elements of the stack are:\n");
    for(i=top; i>=0; i--)
    {
        printf("\t %d \n", Stack[i]);
    }    
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
                printf("\n\t Enter the element you wan to push into the stack:");
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

