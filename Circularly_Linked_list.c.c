//Circularly Linked Lists

#include<stdio.h>
#include<stdlib.h>

void createList(int n);
void display_List();

struct node
{
    int data;
    struct node* next;
};

struct node* Head= NULL;

//Functions
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
                newnode->next=Head;
                temp->next=newnode;
                temp=temp->next;

            }
        }
    }

}

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

        while(temp->next!= Head)
        {
            printf("%d\t", temp->data);
            temp=temp->next;
        }    
        printf("%d",temp->data);
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