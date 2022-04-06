#include<stdio.h>
#include<conio.h>
int main()
{
	 int num1, num2, gcd, i;
     printf(" Are number a and b Co-prime?\n");
	 printf(" Enter a and b:");
	 scanf("%d%d", &num1, &num2);
	 for(i=1;i<=num1;i++)
	 {
	     if(num1%i==0 && num2%i==0)
	     gcd = i;
	  }
	 if(gcd == 1)
        printf(" a and b are CO-PRIME numbers\n");
	 else
        printf(" a and b aren't CO-PRIME numbers\n");
	 return(0);
}
