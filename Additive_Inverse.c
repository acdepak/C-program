//Implementation of Additive Inverse
// additive inverse of 5 modulo 11 is 6
//5+6=11 mod 11 = 0 mod 11
#include<stdio.h>
void main()
{
    int a,b,i;
    printf("Additive inverse of a modulo b\n");
    printf("Enter value for a and b: ");
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        if(((a+i)%b)==0)
            break;
    }
    printf("Additive Inverse of %d is: %d",a,i);
}
