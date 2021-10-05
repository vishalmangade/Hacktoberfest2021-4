
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   
		long long int x[100000000],y[100000000],p,d,n,q;
		cin>>n;
		for(int i=0;i<(n*4-1);i++)
		cin>>x[i]>>y[i];
		d=(n*4-1);
		sort(x,x+d);
		sort(y,y+d);
		for(int i=0;i<(n*4-1);i+=2)
		{
		  if((x[i]!=x[i+1])||(i==(n*4-2)))
		   {
		   	p=x[i];
		   	break;
		   }
		   
	  }
	  	for(int i=0;i<(n*4-1);i+=2)
		{
		  if((y[i]!=y[i+1])||(i==(n*4-2)))
		   {
		  	q=y[i];
		   	break;
		   }
	  }
	  cout<<p<<"\t"<<q<<endl;
}
return 0;
}