#include<stdio.h>
#include<string.h>
void q0(int );
void q1(int );
void q2(int );
void q3(int );
char str[20];
int len,flag;
void main()
{
    printf("Enter the string: ");
    scanf("%s",str);
    len=strlen(str);
    q0(0);
    if(flag==1)
        printf("String is accepted");
    else
        printf("String is rejected");
}
void q0(int i)
{
    int k=i;
    if(i<len)
    {
        if(str[i]=='0')
            q0(++i);
        else
        {
            ++k;
            q0(k);
            q1(k);
        }
    }
}
void q1(int i)
{
    if(i<len)
    {
        if(str[i]=='0')
        {
            q2(++i);
        }
    }
}
void q2(int i)
{
    if(i<len)
    {
        if(str[i]=='0')
        {
            q3(++i);
        }
    }
}
void q3(int i)
{
    int k=i;
    if(i<len)
    {
        if(str[i]=='0')
            q3(++i);
        else
        {
            ++k;
            flag=1;
            q3(k);
        }
    }
}
