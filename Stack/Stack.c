#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
}*start=NULL;


void push();
void pop();
void top();

int main()
{
    while(1)
    {
        printf("\n1. Push into the Stack\n2. Pop out of the stact\n3. Display top element\n4. Exit\n");
        int a;
        scanf("%d",&a);
        switch(a)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: top();
                break;
            case 4: exit(0);
                break;
        }
    }
}

void push()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node *));
    printf("\nEnter the data ");
    scanf("%d",&newnode->data);
    if(start==NULL)
    {
        start = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode->next = start;
        start = newnode;
    }
    
}

void pop()
{
    if(start==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        struct node *temp=start;
        start = temp->next;
        printf("\n%d Popped Out",temp->data);
        free(temp);
    }
    
}

void top()
{
    if(start==NULL)
    {
        printf("\nThe stack is Empty");
    }
    else
    {
        printf("\n%d",start->data);
    }
    
}


