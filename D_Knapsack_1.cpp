#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,W;
    cin>>n>>W;
    ll w[n],v[n];
    for(ll i=0;i<n;i++)
    cin>>w[i]>>v[i];
    ll dp[n+1][W+1];
    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            else
            {
                if(w[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W]<<"\n";
}