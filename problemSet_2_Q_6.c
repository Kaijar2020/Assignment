#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;


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
    print(head);
    printf("\n");
    print_reverse(head);


    return 0;


}
print(node *x)
{
    if(x!=NULL)
    {
        printf("%d\t",x->value);
        print(x->next);

    }
    else
        return ;
}
print_reverse(node *x)
{
    if(x==NULL)
    {
        return ;
    }
    else
    {

        print_reverse(x->next);
        printf("%d\t",x->value);


}
}

