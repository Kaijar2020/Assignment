#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
int size(node *x);

struct Node
{

    int value;
    node *next;


};
node *head =NULL;

int main()
{
    node a,b,c,e,f;
    head=&a;
    a.value=9;
    a.next=&b;
    b.value =6;
    b.next=&e;
    e.value=54;
    e.next=&f;
    f.value=34;
    f.next=&c;
    c.value=7;
    c.next=NULL;


    size(head);
    front(head);
    back(head);


    return 0;


}
int size(node *x)
{
    int count=0;

    while(x!=NULL)
    {
        count++;

         x=x->next;
    }
    printf("The size is : %d\n\n",count);
}
void front(node *x)
{
    if(x==head)
    {
        printf("%d\n",x->value);
    }
}
void back(node *x)
{
    node *var;
    while(x!=NULL)
    {
        if(x=NULL-1)
            x=var;
    }
    printf("%d\n",x->value);
}
