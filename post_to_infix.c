#include <stdio.h>
int s[100];
int top = -1;
push(int e)
{
    s[++top] = e;
}

pow(int a,int b)
{
    if(b==0)
    return 1;
    return a*pow(a,b-1);
}
int pop()
{
    return (s[top--]);
}
main()
{
    int i = 0, v1, v2;
    char c[100];
    scanf("%s", c);
    while (c[i] != '\0')
    {
        if (isdigit(c[i]))
        {
            push(c[i] - 48);
        }
        else
        {
            v1 = pop();
            v2 = pop();
            switch (c[i])
            {
            case '+':
                push(v2 + v1);
                break;
            case '-':
                push(v2 - v1);
                break;
            case '*':
                push(v2 * v1);
                break;
            case '/':
                push(v2 / v1);
                break;
            case '^':
                push(pow(v2,v1));
                break;
            }
        }
        i++;
    }
    printf("%d", pop());
}
