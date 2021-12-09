#include<stdio.h>
#include<stdlib.h>

void createList(int n);
void display_List();
void reverse_list();

struct node
{
    int data;
    struct node* next;
};

struct node* Head= NULL;

/*Below is the code to create a singly linked list. First we declare two pointers to the struct node which we will use to store
the input value for the node(using newnode) and traverse the list (using temp). We first allocate memory to the first node which
is pointed by the Head pointer. The if condition checks if memory was allocated to the first node. The else condition contains the 
code for creating the nodes. We first read the value from the user using scanf and store it in the data part of Head node and we set
the next part to null (we will change this address once we have createdd more nodes to form the linked list). The transversal variable 
temp is now made to point to the Head node (or the first node).

The for loop is used to iterate the code to add "n" nodes as requested by the user. If memory is allocated to the newnode, then the
user is asked to enter the value he wants to store in the node. The newnode->data will be assigned the value and the newnode->next 
will be set to null. In order to join the first node and this newly created node, we set the temp->next to newnode. And finally we 
set temp=temp->next so that now temp points at the second node. In the subsequent iterations, temp will traverse the whole list and 
help in linking the nodes.

*/
void createlist(int n)
{
    struct node *newnode, *temp;
    int data, i;
    Head= (struct node*)malloc(sizeof(struct node));

    if (Head==NULL)
    {
        printf("Cannot allocate memory");
    }

    else
    {
        printf("Enter the data for the the first node:");
        scanf("%d", &data);
        Head->data=data;
        Head->next=NULL;
        temp=Head;

        for(i=2; i<=n; i++)
        {
            newnode= (struct node*)malloc(sizeof (struct node));

            if (newnode==NULL)
            {
                printf("******Memory is not allocated*******");
                break;
            }
            else
            {
                printf("\nEnter the data for the new node: ",i);
                scanf("%d",&data);
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;

            }
        }
    }

}

/*Displaying a singly linked list: As stated above, to display the elements of the list, we will print the temp->data as temp traverses 
the whole list*/
void display_List()
{
    struct node *temp;

    if(Head==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        temp=Head;

        while(temp!= NULL)
        {
            printf("%d\t", temp->data);
            temp=temp->next;
        }    
    }
}

/*Reverse a linked list: */
void reverse_list()
{
    // Initialize current, previous and next pointers
    struct node *current = Head;
    struct node *prev = NULL, *next = NULL;
    while (current != NULL)
    {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    Head = prev;
}


//The main function where we call the above functions to implemet a singly linked list of atleast 7 nodes
int main()
{
    int n;
    printf("\n Enter the total number of nodes:");
    scanf("%d",&n);

    if(n<7)
    {
        printf("Atleast 7 nodes required");
    }

    else
    {
        createlist(n);
        printf("\nThe linked list is:\n");
        display_List();
        printf("\nReverse of the list is:\n");
        reverse_list();
        display_List();

        return 0;
    }
}