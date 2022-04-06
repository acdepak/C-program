#include<stdio.h>
#include<conio.h>
//Function to compute a^m mod n
long long int power(int a, int m, int n)
{
    long long int t;
    if(m==1)
    return a;
    t=power(a,m/2,n);
    if(m%2==0)
    return(t*t)%n;
    else
    return(((t*t)%n)*a)%n;
}

long int calculateKey(int a, int x, int n)
{
    return power(a,x,n);

}
void main()
{
    int n,g,a,A,b,B;
    printf(" Enter the value of modulus n and base g: ");
    scanf("%d%d",&n,&g);
    printf(" Enter the value of a for the first person: ");
    scanf("%d",&a);
    A=power(g,a,n);
    printf(" Enter secret integer for Second person: ");
    scanf("%d",&b);
    B=power(g,b,n);
    printf("Key for the first person is: %lld\n",power(B,a,n));
    printf("Key for the second person is: %lld\n",power(A,b,n));
    getch();
}
