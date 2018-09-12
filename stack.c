#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

}*top=NULL;

void insert();
void delete();
void display();

int main()
{
    int c,i=1;

    while(i==1)
    {
        printf("the choices are :-\n1.insertion \n2.deletion\n3.display\n4.exit\n");
        printf("Enter the choices");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("enter the correct choice");


        }

    }
    return 0;
}
void insert()
{
    struct node *temp;
    temp=(struct node *) malloc(sizeof(struct node));
    printf("Enter the data:-  ");
    scanf("%d",&temp->data);
    if(top==NULL)
    {
        temp->next=NULL;
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;

    }

}
void delete()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("your stack is empty");
        
    }
    else
    {
        temp=top;
        top=top->next;
        printf("the deleted data is %d\n",temp->data);
        free(temp);


    }
}
void display()
{
    struct node  *temp;
    temp=top;
    printf("the data is  ");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}