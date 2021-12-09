#include <stdio.h>
#include <stdlib.h>

//Declarations

struct Node//declaring the structure of node
{
    int Data;
    struct Node *Next;
};

struct Node* create_linked_list(int n); // function to create a linked list
void Display_linked_list(struct Node*Head);//function to display the elements of the linked list

//Functions

struct Node* create_linked_list(int n)
{
    int i=0;
    struct Node* Head;
    struct Node* temp;
    struct Node* p;

    for(i=0;i<n;i++); 
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the value to be stored in the node:");
        scanf("%d",&(temp->Data));
        temp->Next=NULL;
    
        //when this runs for the first time, the if condition below is executed

        if(Head=NULL)//if list is empty, make temp the first node
        {
            Head=temp;
        }
        else
        {
            p=Head;
            while(p->Next != NULL)
            {
                p=p->Next;
            }
            p->Next=temp;
        }
    }
    return(Head);
}

void Display_linked_lists(struct Node*Head)
{
    struct Node*p=Head;
    while(p!= NULL)
    {
        printf("%d->",p->Data);
        p=p->Next;
    }
}

void main()
{
    int n=0;
    struct Node* Head=NULL;
    printf("Enter the number of Nodes:");
    scanf("%d",&n);
    Head= create_linked_list(n);
    void Display_linked_lists(struct Node* Head);    
}

