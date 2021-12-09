// Doubly Linked Lists

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head;

//Functions
void createlist(int n)
{
    struct node *newnode, *temp;
    int data, i;
    head= (struct node*)malloc(sizeof(struct node));

    if (head==NULL)
    {
        printf("Cannot allocate memory");
    }

    else
    {
        printf("Enter the data for the the first node:");
        scanf("%d", &data);
        head->data=data;
        head->prev=NULL;
        head->next=NULL;
        temp=head;

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
                newnode->prev=temp;
                newnode->next=NULL;
                
                temp->next=newnode;
                temp=temp->next;
            }
        }
    }

}

void display_List()
{
    struct node *temp;

    if(head==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        temp=head;

        while(temp!= NULL)
        {
            printf("%d\t", temp->data);
            temp=temp->next;
        }    
    }
}

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
        return 0;
    }
}