#include "bits/stdc++.h"
using namespace std;

const long long M = 1e9 + 7;

long long exp(long long b, long long e)
{
    long long p = 1;
	while(e > 0)
	{
		if (e%2 == 1)
			p = (p * b)%M;
		b = (b * b)%M;
		e = e/2;
    }
    return (p % M);
}

long long modInverse(long long q)
{
    return exp(q, (M-2));
}

int main()
{
    long long n, k;
    cin >> n >> k;
    long long p, q;
    q = exp(2, (n-1));
    p = q - n;
    while (p<0) p += M;
    long long qmod = modInverse(q);
    long long ans = (p*qmod) % M;
    cout << ans << endl;
    return 0;
}