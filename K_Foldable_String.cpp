#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)
#define vi vector <int>
#define vl vector <ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,czero=0,cone=0;
        cin>>n>>k;
        int x=n/k;
        vi v;
        For(0,n)
        {
            char ch;
            cin>>ch;
            if(ch=='0')
            czero++;
            else
            cone++;
            v.push_back(ch-'0');
        }
            if(czero%x==0 && cone%x==0)
            {
                string ans,rev,final;
                czero/=x;
                cone/=x;
                for(int i=0;i<czero;i++)
                ans.push_back('0');
                for(int i=0;i<cone;i++)
                {
                    ans.push_back('1');
                }
                rev=ans;
                sort(rev.begin(),rev.end(),greater<char>());
                for(int i=0;i<x;i++)
                {
                    if(i&1)
                    final+=rev;
                    else
                    {
                        final+=ans;
                    }
                    
                    
                }
                cout<<final<<"\n";

            }
            else
            {
                cout<<"IMPOSSIBLE\n";
            }
            

    }
}