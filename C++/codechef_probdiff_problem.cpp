#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int a[4];
        map<int,int> m;
        for(int &i:a){
            cin>>i;
            m[i]++;
        }
        int x=0;
        for(pair<int,int>p : m){
            if(p.second>x){
                x=p.second;
            }
        }

        int ans;
        if(x==4) ans=0;
        else if(x==3) ans=1;
        else ans=2;

        cout<<ans<<"\n";
    }
}
