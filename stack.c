#include<stdio.h>
#include<string.h>
void push_stack(char ch);
void pop();
char get_stack();
struct stack {
    char data[100];
    int top;
}s;
void main()
{
    int top=-1;
    push_stack('5');
    printf("%c\t %d\n",get_stack(),s.top);
    push_stack('10');
    printf("%c\t%d\n",get_stack(),s.top);
    push_stack('15');
    printf("%c\t%d\n",get_stack(),s.top);
    pop();
    pop();
    printf("%c\t%d\n",get_stack(),s.top);
}
void push_stack(char ch)
{
    s.top++;
    s.data[s.top]=ch;
}
void pop()
{
    s.top--;
}
char get_stack()
{
    return s.data[s.top];
}
