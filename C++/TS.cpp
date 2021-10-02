#include <bits/stdc++.h>
#define ll long long int
#include<map>
#include<vector>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t=1;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n],i;
	    map<int,int>m;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    if(m.find(x)!=m.end())
	    cout<<1<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
