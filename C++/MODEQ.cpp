#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define repre(i,a1,b1) for(i=a1;i<=b1;i++)
bool comp(int a, int b)
{
    return (a < b);
}
int cool(ll temp1,ll temp2,ll M)
{
    ll ans;
    ans=1;
    temp1=temp1%M;
    if(temp1==0)
        return 0;
    while(temp2>0)
    {
        if(temp2&1)
            ans=(ans*temp1)%M;
        temp2=temp2>>1;
        temp1=(temp1*temp1)%M;
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll sum=0,z;
    repre(z,0,10000)
        sum++;
    ll t;
    cin>>t;
   while(t--)
   {
       ll N,M,i,j;
       ll mod;
       ll cnt=0;
       cin>>N>>M;
        vector<ll> vec(N+1,1);
        repre(i,2,N)
        {
            mod=M%i;
            cnt=cnt+vec[mod];
            for(j=mod;j<=N;j+=i)
            {
                vec[j]=vec[j]+1;
            }
        }
        cout<<cnt<<endl;
   }
    return 0;
    
}