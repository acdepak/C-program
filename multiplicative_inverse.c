//implementation of multiplicative inverse
#include <stdio.h>
// C function for extended Euclidean Algorithm
int gcd(int a, int b, int* x, int* y);

// Function to find modulo inverse of a
void modInverse(int a, int m)
{
	int x, y;
	int g = gcd(a, m, &x, &y);
	if (g != 1)
		printf(" Inverse of %d and %d doesn't exist \n", a,m);
	else
	{
		// m is added to handle negative x
		int res = (x % m + m) % m;
		printf(" Modular multiplicative inverse is %d\n", res);
	}
}

int gcd(int a, int b, int* x, int* y)
{
	 //Base Case
	if (a == 0)
	{
		*x = 0, *y = 1;
        return b;
	}

	int x1, y1; // To store results of recursive call
	int g = gcd(b % a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b / a) * x1;
	*y = x1;

    return g;

}
int main()
{
	int a = 68745, m = 7845;
	modInverse(a, m);
	return 0;
}
