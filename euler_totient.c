#include <stdio.h>

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int phi(unsigned int n)
{
	unsigned int result = 1,i;
	for (i = 2; i < n; i++)
		if (gcd(i, n) == 1)
			result++;
	return result;
}

// Driver program to test above function
int main()
{
	int n,j;
	printf("Enter a number");
	scanf("%d",&n);
	j=n+10;
	for (n; n<j ; n++)
		printf("phi(%d) = %d\n", n, phi(n));
	return 0;
}
