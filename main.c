#include <stdio.h>
#include <stdlib.h>
typedef struct Linkedlist
{
    int val;
    struct Linkedlist *next;
}node;
void ins_b(node **head,int a)
{
    node *new;
    new = (node *)malloc(sizeof(node));
    new->val=a;
    new->next=*head;
    *head=new;
}
void ins_e(node **head,int a)
{
    node *new,*p;
    new = (node *)malloc(sizeof(node));
    new->val=a;
    new->next=NULL;
    p=*head;
    if(*head == NULL)
        *head=new;
    else{
          while(p->next != NULL)
                p=p->next;
          p->next=new;
        }
}
void display(node *head)
{
    node *p;
     p=head;
     if(head==NULL)
        printf("empty\n");
     else{
        while(p!=NULL)
            {
            printf("%d\n",p->val);
            p=p->next;}
        }
}
int main()
{
    node *head=NULL;
    int x,a=1;
    do{
    printf("enter number:");
    scanf("%d",&x);
    ins_e(&head,x);
    printf("1 continue - 0 exit:");
    scanf("%d",&a);
    if(a==0)
        break;
    }while(1);
    display(head);
}
