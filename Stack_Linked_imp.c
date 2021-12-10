#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct stack /*declaring a stack with two fields: element field to store the data, and next pointer to 
               store the address of the next stack element*/
{
    int element;
    struct stack *next;
};
struct stack *top;
void push(int);
int pop();
void display();

//Push Function
void push(int value)
{
    struct stack *ptr= (struct stack*)malloc (sizeof(struct stack));
    ptr->element= value;
    ptr->next= top;
    top=ptr;
    return;
}

//Pop Function
int pop()
{
    if(top==NULL)
    {
        printf("Stack is Empty! No element can be removed");
        getch;
        exit(1);
    }
    else
    {
       int temp= top->element;
       top= top->next;
       return (temp);
    }
}

//Displaying the stack elements
void display()
{
    struct stack *jump= (struct stack*)malloc(sizeof (struct stack));
    jump=NULL;
    jump=top;
    printf("Stack elements are:2");
    while(jump!= NULL)
    {
        printf("%d\t", jump->element);
        jump= jump->next;
    }
    return;
}
    
    
int main()
{
    int num1, num2, choice;
    struct stack *top= NULL;
    
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
            printf("\n Invalid Choice selected\n");
            break; 
            }   
        }
    }
}

