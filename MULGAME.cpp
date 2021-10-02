#include<bits/stdc++.h>
using namespace std;
#define sugar string
#define ll long long int
#define repre(i,a1,b1) for(i=a1;i<b1;i++)
#define repre2(i,a1,b1) for(i=a1;i<=b1;i++)
ll biggest(ll x1,ll x2)
{
 return(x1>=x2?x1:x2);
}
ll smallest(ll a,ll b)

{
 return (a<=b?a:b);
}

/*ll max(ll a,ll b)

{

return (a>=b?a:b);

}*/

/*ll gd(ll a,ll b)

{

 if(b==0)

 return a;

 return gd(b,a%b);

}*/

/*ll pwr(ll a,ll b)

{

    ll res=0;

    while(b)

    {

        if(b%2==1)

        {

            res*=a;

        }

        a=a*a;

        b>>=1;

    }

    return res;

}*/


int main()
{
    ll t;
     cin>>t;
    ll o,sum=0;
    repre(o,0,10000)
        sum++;
     while(t--)

     {

        ll n,q,m,j;
        cin>>n>>q>>m;
        int arr[n];
        int brr[1000001]={};
         repre(j,0,n)
            cin>>arr[j];

 //int b[1000001]={};

 //int ans[m+1]={};
        map<pair<ll,ll>,ll>mp;

         while(q--)

         {
             ll lef,rig;
             cin>>lef>>rig;
            lef--;
            rig--;
             if(arr[lef]>m)
             continue;
             else if(arr[lef]<=m && arr[rig]>m)
             {
                 brr[arr[lef]]=brr[arr[lef]]+1;
                brr[m+1]=brr[m+1]-1;
             }
             else if(arr[rig]<=m)
             {
                brr[arr[lef]]++;
                brr[m+1]--;
                 mp[{arr[lef],arr[rig]}]++;
             }
         }

         for(auto x:mp)
         {
             ll cnt1=x.first.first;
            ll cnt2=x.first.second;
            ll lef=x.second;
            ll cnt;
             brr[cnt1+cnt2]=brr[cnt1+cnt2]-lef;
            brr[cnt2+2*cnt1]=brr[cnt2+2*cnt1]+lef;
             cnt=cnt2+2*cnt1;
             while(cnt+cnt2<=m)
                 {
                    cnt=cnt+cnt2;
                    brr[cnt]=brr[cnt]-lef;
                    brr[cnt+cnt1]=brr[cnt+cnt1]+lef;
                    cnt=cnt+cnt1;
                 }
         }
 //for(int i=1;i<=m;i++)
        ll temp;
        repre2(j,1,m)
        {
             brr[j]+=brr[j-1];
        }
          temp=0;
        //for(int i=0;i<=m;i++)
        repre2(j,0,m)
        {
             temp=biggest(brr[j],temp);
        }
        cout<<temp<<endl;
         }
     return 0;
}
