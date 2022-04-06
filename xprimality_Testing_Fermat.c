#include <stdio.h>
#include<math.h>
int pow1(int a, int b, int M) {//3, 5, 7
   int x;
   x=pow(a,b);//3^5=243
   x=x%M;//243%7=5

   return x;
}
int gcd(a,b)//recursion
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);//gcd(3,7)=1
}

int modInverse(int a, int m) {
    if(gcd(a,m)==1)//true
        return pow1(a, m - 2, m);//a=3, m-2=5, m=7
    else
    {
        printf("Not co-prime");
        return -1;
    }
}
int main() {
   int a=3, m=27;
   printf("%d",modInverse(a, m));
}
