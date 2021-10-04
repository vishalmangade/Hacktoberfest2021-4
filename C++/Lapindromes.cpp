#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1,s2;
        cin>>s;
        int f=0;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            s1.push_back(s[i]);
        }
        if(n%2==0)
        {
            for(int i=n-1;i>=n/2;i--)
            {
                s2.push_back(s[i]);
            }
        }
        else
        {
            for(int i=n-1;i>n/2;i--)
            s2.push_back(s[i]);
        }
        
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[i])
            continue;
            else
            {
                f=1;
            }
        }
        if(f==1)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
    }

}