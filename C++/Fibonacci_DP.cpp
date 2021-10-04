#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
  int f[n+2];
  int i;
 
  f[0] = 0;                     //Base Case
  f[1] = 1;                     //Base Case
 
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];   //store in an array
 
  return f[n];
}
 
int main ()
{
  int n = 9;
  printf("%d", fib(n));
  getchar();
  return 0;
}
