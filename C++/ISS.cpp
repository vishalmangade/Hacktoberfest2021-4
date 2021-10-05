#include<bits/stdc++.h>
using namespace std;
//#define ll long long int
#define repre(i,a1,b1) for(i=a1;i<b1;i++)
#define M 1000000007

bool comp(int a, int b)
{
    return (a < b);
}
int cool(int temp1,int temp2,int Mo)
{
    int ans;
    ans=1;
    temp1=temp1%Mo;
    if(temp1==0)
        return 0;
    while(temp2>0)
    {
        if(temp2&1)
            ans=(ans*temp1)%Mo;
        temp2=temp2>>1;
        temp1=(temp1*temp1)%Mo;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m=4e6+5;
    int sum1=0;
    int xx;
    repre(xx,0,100000)
        sum1++;
    int arr[m];
    int cnt[m];
    int j,x,q;
    repre(j,0,m)
    {

        arr[j]=j;
        cnt[j]=0;
    }
    repre(x,2,m)
    {
        if(arr[x]==x)
        {
            arr[x]=x-1;
            int g=2*x;
            for(j=g;j<m;j+=x)
            {
                arr[j]=(x-1)*(arr[j]/x);
            }
        }
    }
    repre(j,1,m)
    {
        cnt[j]=cnt[j]+j-1;
        int g1=2*j;
        for(q=g1;q<m;q+=j)
        {
            cnt[q]=cnt[q]+(((1+arr[q/j])/2)*j);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int temp=4*k+1;
        cout<<cnt[temp]<<"\n";
    }
    return 0;
}




