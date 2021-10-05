// Program to find factorial of a number

#include<iostream>
using namespace std;

int findFactorial(int n)
{
	if(n == 0 || n == 1)
		return 1;
	return n * findFactorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	int ans = findFactorial(n);
	cout<<ans<<endl;
	return 0;
}

/*
  INPUT-
  5
  
  OUTPUT-
  120
*/
