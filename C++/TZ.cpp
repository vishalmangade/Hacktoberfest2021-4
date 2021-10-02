#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define repre(i,a1,b1) for(i=a1;i<b1;++i)
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
const int M=1E9+7;
const int mn=3E5+5;
vector<ll> a[mn];
vector<ll> su;
vector<ll> v;
vector<pair<ll,ll>> c;

void cal(ll no,ll f=-1)
{
    for(auto itr:a[no])
    {
        if(itr==f)
            continue;
        cal(itr,no);
    }
    ll t;
    t=1;
    c.clear();
    for(auto itr:a[no])
    {
        if(itr!=f)
            c.emplace_back(su[itr],itr);
    }
    sort(rbegin(c),rend(c));
    for(auto[v1,d]:c)
        v[d]=t++;
    for(auto itr:a[no])
    {
        if(itr!=f)
            su[no]=su[no]+v[itr]*su[itr];
    }

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
      ll n,x;
      ll i;
      cin>>n>>x;
      v.assign(n,0);
      su.assign(n,1);
      repre(i,0,n)
      {
          vector<ll>().swap(a[i]);
      }
      repre(i,0,n-1)
      {
          ll urr,vrr;
          cin>>urr>>vrr;
          --vrr;
          --urr;
          a[vrr].emplace_back(urr);
          a[urr].emplace_back(vrr);
     
      }
      cal(0);
      ll temp=su[0] % M * x % M;
      cout<<temp<<"\n";

   }
    return 0;
    
}