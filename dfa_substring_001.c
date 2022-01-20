//DFA that accepts string with sub string 001.
#include<stdio.h>
enum state {q0,q1,q2,q3};
enum state transition(enum state, char ch);
void main()
{
    char bstr[20],ch;
    int i=0;
    enum state curr_state=q0;
    printf(" Enter the binary string: ");
    scanf("%s",bstr);
    ch=bstr[i];
    while(ch!='\0')
    {
        curr_state=transition(curr_state,ch);
        ch=bstr[++i];
    }
    if(curr_state==q3)
        printf(" Accepted");
    else
        printf(" Rejected");

}
enum state transition(enum state s, char ch)
{
    enum state new_state;
    switch(s)
    {
    case q0:
        if(ch=='0')
            new_state=q1;
        else
            new_state=q0;
        break;
    case q1:
         if(ch=='0')
            new_state=q2;
        else
            new_state=q0;
        break;
    case q2:
         if(ch=='0')
            new_state=q2;
        else
            new_state=q3;
        break;
    case q3:
         if(ch=='0')
            new_state=q3;
        else
            new_state=q3;
        break;
    }
    return new_state;
}
