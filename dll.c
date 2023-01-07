#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	struct NODE *llink;
	int data;
	struct NODE *rlink;
};
typedef struct NODE node;
node *start=NULL,*curr,*new,*temp;
void create()
{
	start=(node*)malloc(sizeof(node));
	printf("Enter element:");
	scanf("%d",&start->data);
	start->llink=NULL;
	curr=start;
	while(1)
	{
		int choice;
	    printf("Do you want to add an element? press 1 for yes , 0 for no\n");
        scanf("%d", &choice);
        if(choice)
        {
            new = (node*)malloc(sizeof(node));
            curr->rlink=new;
            new->llink=curr;
            printf("Enter the element:");
            scanf("%d",&new->data);
            curr=new;
   		 }
   		else
   		{
   		 	curr->rlink=NULL;
   		 	break;
		}
}
}
void insert_beg()
{
	new=(node*)malloc(sizeof(node));
	printf("Enter an element:");
	scanf("%d",&new->data);
	if(start==NULL)
	{
		new->llink=NULL;
		new->rlink=NULL;
		start=new;
		return;
	}
	new->rlink=start;
	start->llink=new;
	new->llink=NULL;
	start=new;
}
void delete_ele()
{
    node *temp;
    int ele;
	if(start==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	printf("Enter element to be deleted:");
	scanf("%d",&ele);
	if(start->data==ele)
	{
		temp=start;
		start=start->rlink;
		start->llink=NULL;
		free(temp);
		return;
	}
	temp=start;
	while(temp->rlink!=NULL&&temp->data!=ele)
		temp=temp->rlink;
	if(temp->data==ele&&temp->rlink==NULL)
	{
		temp->llink->rlink=NULL;
		free(temp);
		return;
	}
	if(temp->data==ele&&temp->rlink!=NULL)
	{
		temp->llink->rlink=temp->rlink;
		temp->rlink->llink=temp->llink;
		free(temp);
		return;
	}
	printf("Element not found\n");
}
void display()
{
	if(start==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->rlink;
	}
}
void main()
{
    int choice;
    printf("1.CREATE\n2.INSERT AT BEGINING\n3.DELETE SPECIFIC ELEMENT\n4.DISPLAY\n5.EXIT\n");
    while(1)
    {
        printf("Enter choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: create();
                break;
            case 2: insert_beg();
                break;
            case 3: delete_ele();
                break;
            case 4:display();
            	break;
            case 5:exit(0);
            	break;
            default:printf("Invalid choice\n");
        }
   #include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *link;
};
typedef struct NODE node;
node *front=NULL,*rear=NULL,*new=NULL;
void disp()
{
    node *temp;
    if(front==NULL)
    {
        printf("Empty");
        return;
    }
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void ins_beg()
{
    new=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new->data);
    if(front==NULL)
    {
        front=new;
        rear=new;
        new->link=NULL;
        return;
    }
    new->link=front;
    front=new;
}
void ins_end()
{
    node *temp;
    temp=rear;
    new=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new->data);
    if(front==NULL)
    {
        front=new;
        rear=new;
        new->link=NULL;
        return;
    }
    new->link=NULL;
    temp->link=new;
    temp=temp->link;
    rear=temp;
}
void del_beg()
{
    node *temp;
    temp=front;
    if(front==NULL)
    {
        printf("Empty");
        return;
    }
    front=front->link;
    free(temp);
}
void stackop()
{
    int c1;
    while(1)
    {
        printf("\n1.Push 2.Pop 3.Display 4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&c1);
        switch(c1)
        {
            case 1:ins_beg();
                   break;
            case 2:del_beg();
                   break;
            case 3:disp();
                   break;
            case 4:exit(0);
                   break;
            default:printf("Wrong choice!");
        }
    }
}
void queueop()
{
    int c1;
    while(1)
    {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&c1);
        switch(c1)
        {
            case 1:ins_end();
                   break;
            case 2:del_beg();
                   break;
            case 3:disp();
                   break;
            case 4:exit(0);
                   break;
            default:printf("Wrong choice!");
        }
    }
}
void main()
{
    int c1;
    printf("1.Stack 2.Queue");
    printf("\nEnter your choice:");
    scanf("%d",&c1);
    switch(c1)
    {
        case 1:stackop();
               break;
        case 2:queueop();
               break;
        default:printf("Wrong Choice!");
    }
} }
}
