#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string num;
	    cin>>num;
	    int a=0,b=0;
	    for(int i=0;i<num.length();i++)
	    {
	        if(num[i]=='1')
	        a++;
	        else
	        b++;

	    }
	    if(a>b)
	    cout<<"WIN\n";
	    else
	    cout<<"LOSE\n";
	}
	return 0;
}
