#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*start=NULL;

void create();
void display();
// void ReverseDisplay();
void insertBegin();
void insertEnd();
void insertMid();
int length();
void deleteBegin();
void deleteEnd();
void deleteMid();
int main()
{
    while (1)
    {
        printf("\n1. Create a Linked List \n2. Display the Linked List\n3. Insert At the Beginning\n4. Insert At the End\n5. Insert in the Middle\n6. Delete from the Beginning\n7. Delete from the End\n8. Delete from the mid\n9. Exit\n");
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertBegin();
            break;
        case 4:
            insertEnd();
            break;
        case 5: 
            insertMid();
            break;
        case 6: 
            deleteBegin();
            break;
        case 7: 
            deleteEnd();
            break;
        case 8: 
            deleteMid();
            break;        
        case 9:
            exit(0);
            break;
        }
    }
}

void create()
{
    start = NULL;
    struct node *newnode,*curnode;
    char ch;
    do
    {
        newnode = (struct node*)malloc(sizeof(struct node*));
        printf("\nEnter the Data ");
        scanf("%d",&newnode->data);
        if(start==NULL)
        {
            start = newnode;
            curnode = newnode;
            start->prev = NULL;
        }
        else
        {
            curnode->next = newnode;
            newnode->prev = curnode;
            curnode = newnode;
        }
        
        printf("\nDo you want to add more? ");
        ch = getch();
        
    } while (ch!='n');
    curnode->next = NULL;
}

void display()
{
    
    if(start==NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        struct node *temp = start;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    
}

void insertBegin()
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node*));
    printf("\nEnter the data ");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start = newnode;
        start->next = NULL;
        start->prev = NULL;
    }
    else
    {
        newnode->next = start;
        newnode->prev = NULL;
        start->prev = newnode;
        start = newnode;
    }
    
}


void insertEnd()
{
    struct node* newnode = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter the data ");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start = newnode;
        newnode->next = NULL;
        newnode->prev = NULL;
    }
    else
    {
        struct node* temp = start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
    }
    
}

int length()
{
    int count=0;
    if(start==NULL)
    {
        return count;
    }
    else
    {
        struct node *temp = start;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

void insertMid()
{
    int pos;
    printf("\nEnter the Position ");
    scanf("%d",&pos);
    if(pos>length())
    {
        printf("\nInvalid Position");
    }
    else if(pos==length())
    {
        insertEnd();
    }
    else if(pos==0)
    {
        insertBegin();
    }
    else
    {
        struct node * newnode = (struct node*)malloc(sizeof(struct node*));
        printf("\nEnter the data ");
        scanf("%d",&newnode->data);
        int count = 1;
        struct node * temp = start;
        while(count!=pos)
        {
            temp=temp->next;
            count++;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }
    
}

void deleteBegin()
{
    if(start==NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        struct node *temp = start;
        start = temp->next;
        if(temp->next!=NULL)
        {
            temp->next->prev = NULL; 
        }
        free(temp);
    }
    
}

void deleteEnd()
{
    if(start==NULL)
    {
        printf("\nList is Empty");
    }
    else if(start->next==NULL)
    {
        free(start);
        start =NULL;
    }
    else
    {
        struct node * temp = start;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    
}

void deleteMid()
{
    int pos;
    printf("\nEnter The position ");
    scanf("%d",&pos);
    if(pos>length()||pos<=0)
    {
        printf("\nInvalid Position");
    }
    else if(pos==1)
    {
        deleteBegin();
    }
    else if(pos==length())
    {
        deleteEnd();
    }
    else
    {
        struct node* temp=start;
        int count=1;
        while(count!=pos)
        {
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp); 
    }
    
}