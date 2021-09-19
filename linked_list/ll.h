#include <stdio.h>
struct node
{
    int d;
    struct node *n;
} *h;

void ins(int n)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->d = n;
    t->n = 0;
    if (!h){
        h = t;
        return;
    }
    struct node *p = h;
    while (p->n)
        p = p->n;
    p->n = t;
}

void disp()
{
    struct node *t = h;
    while (t)
    {
        printf("%d ",&(t->d));
        t = t->n;
    }
}

void takeinput()
{
    int n;
    printf("\nEnter the length of the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        ins(t);
    }
}