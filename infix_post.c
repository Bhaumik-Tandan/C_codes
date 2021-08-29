#include <stdio.h>
#include <string.h>
char stack[50];
int top = -1;
void push(char c)
{
    top++;
    stack[top] = c;
}
char pop()
{
    char c;
    if (top == -1)
        return -1;
    else
    {
        c = stack[top];
        top--;
        return c;
    }
}
int priority(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;
}
main()
{
    char exp[100];
    char *p, x;
    printf("Enter the expression :: ");
    scanf("%s", exp);
    p = exp;
    while (*p != '\0')
    {
        if (isalnum(*p))
            printf("%c", *p);

        else if (*p == '(')
            push(*p);
        else if (*p == ')')
        {
            while ((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*p))
                printf("%c", pop());
            push(*p);
        }
        p++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}