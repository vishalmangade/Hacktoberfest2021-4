#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define MOD 1000000007

using namespace std;

int n;
vector<ll> fib;

// Program to print Fibonacci Sequence first n terms MODULO 1e9+7
int main()
{
	cin >> n;

	fib = vector<ll> (n+1);
	fib[1] = fib[2] = 1;
	for (int i = 1; i <= n; ++i)
	{
		if(i <= 2)
		{
			cout << fib[i] << " ";
			continue;
		}

		fib[i] = (fib[i-1] + fib[i-2]) % MOD;
		cout << fib[i] << " ";
	}
	cout << "\n";

	return 0;
}