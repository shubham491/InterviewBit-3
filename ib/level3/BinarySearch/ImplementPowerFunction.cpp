/*************************************************************************************************
Implement Power Function

Implement pow(x, n) % d.
In other words, given x, n and d,

find (xn % d)

Note that remainders on division cannot be negative.
In other words, make sure the answer you return is non negative.

Input : x = 2, n = 3, d = 3
Output : 2

2^3 % 3 = 8 % 3 = 2.
*************************************************************************************************/
#include <vector>
using namespace std;

#define OWN

#ifdef OWN
int Pow(int x, int n, int d) 
{
	long long ans = 1;

	while (n)
	{
		if (n & 0x01)
		{
			ans = (ans * x) % d;
			n--;
		}
		else {
			x = ((long long)x * x)%d;
			n /= 2;
		}
	}
	
	if (ans < 0) ans += d;
	
	return ans % d;
}
#else
int pow(int x, int n, int p) {
	if (n == 0) return 1 % p;

	long long ans = 1, base = x;
	while (n > 0) {
		// We need (base ** n) % p. 
		// Now there are 2 cases. 
		// 1) n is even. Then we can make base = base^2 and n = n / 2.
		// 2) n is odd. So we need base * base^(n-1) 
		if (n % 2 == 1) {
			ans = (ans * base) % p;
			n--;
		}
		else {
			base = (base * base) % p;
			n /= 2;
		}
	}
	if (ans < 0) ans = (ans + p) % p;
	return ans;
}
#endif