#include<stdio.h>
#include<string.h>
enum state{q0,q1,q2};
enum state transition(enum state, char ch);
int keyword(char str[]);
int phone(char str[]);
char key[32][10]={"auto","break","case","char","const","continue","default","do","double",
    "else","enum","extern","float","for","goto","if","int","long","register","return","short",
    "signed","sizeof","static","struct","typedef","union","unsigned","void","volatile","while"};
void main()
{
    char ch, str[10];
    int i=0;
    enum state curr_state=q0;
    printf("Enter the string: ");
    scanf("%s",str);
    if(keyword(str))
        printf("%s is a keyword",str);
    else if(phone(str))
        printf("%s is a phone number",str);
    else
    {
        ch=str[i];
        while(ch!='\0')
        {
            curr_state=transition(curr_state,ch);
            ch=str[++i];
        }
        if(curr_state==q1)
            printf("%s is an identifier",str);
        else
            printf("%s is not an identifier",str);
    }
}
int keyword(char str[])
{
    int i,flag=0;
    for(i=0;i<32;i++)
    {
        if(strcmp(str,key[i])==0)
            return 1;
        else
            flag=0;
    }
    if(flag==0)
        return 0;
}
int phone(char str[])
{
    int i,flag=1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<'0' || str[i] > '9')
        {
             flag=0;
             break;
        }
    }
    if(flag==1)
        return 1;
    else
        return 0;
}
enum state transition(enum state s, char ch)
{
    enum state new_state;
    switch(s)
    {
   case q0:
       if(ch=='_'||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            new_state=q1;
       else
            new_state=q2;
        break;
   case q1:
       new_state=q1;
        break;
   case q2:
        new_state=q2;
        break;
    }
    return new_state;
}




