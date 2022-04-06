//implementation of GCD
#include<stdio.h>
int gcd(int a,int b);
void main()
{
    int a,b;
    printf("Enter two no.: ");
    scanf("%d%d",&a,&b);
    printf("GCD is: %d",gcd(a,b));
}
int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
