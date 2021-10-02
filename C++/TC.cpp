#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define repre(i,a1,b1) for(i=a1;i<b1;i++)
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
vector<string> vec(3);
bool exam(char p)
{
    ll i;
    if(vec[0][2]==p && vec[0][2]==vec[1][1] && vec[1][1]==vec[2][0])
        return 1;
    if(vec[0][0]==p && vec[0][0]==vec[1][1] && vec[1][1]==vec[2][2])
        return 1;
    repre(i,0,3)
    {
        if(vec[0][i]==p && vec[0][i]==vec[1][i] && vec[1][i]==vec[2][i])
            return 1;
        if(vec[i][0]==p && vec[i][0]==vec[i][1] && vec[i][1]==vec[i][2])
            return 1;
    }
    return 0;
}

int main()
{
    ll sum=0,z;
    repre(z,0,10000)
        sum++;
    ll t;
    cin>>t;
    while(t--)
    {
        vec.clear();
        ll i,j;
        ll cnt1=0;
        ll cnt2=0;
        bool x=0,y=0;
        repre(i,0,3)
            cin>>vec[i];
        repre(i,0,3)
        {
            repre(j,0,3)
            {
                if(vec[i][j]=='O')
                    cnt2++;
                if(vec[i][j]=='X')
                    cnt1++;
                    
            }
        }
        x=exam('X');
        y=exam('O');
        if( (x + y>1) || (x && cnt2==cnt1 ) || (y && cnt1>cnt2) || cnt2>cnt1 || cnt1-cnt2>1)
            cout<<3;
        else if(x || y || (cnt1+cnt2==9))
            cout<<1;
        else
            cout<<2;
        cout<<endl;
    }
    return 0;
    
}