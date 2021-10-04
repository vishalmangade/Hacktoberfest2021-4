#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define pb push_back
#define mp make_pair
ll mod=pow(10,9)+7;
ll power(ll n,ll k){
    ll res=1;
    while(k){
        if(k%2!=0){
            res*=n;
        }
        n=n*n;
        k/=2;
    }
    return res;
}
ll calc(ll x,ll y){
    int p=0,ans=0;
    while(x){
        if(x%2==1){
            if(y%2==0){
                ans+=pow(2,p);
            }
        }
        // else{
        //     if(y%2==1){
        //         ans+=pow(2,p);
        //     }
        // }
        p++;
        x/=2;
        y/=2;
    }
    return ans;
}
void solve(){
    ll n;
    cin>>n;
    ll arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    vector<ll> v;
    v.push_back(0);
    ll temp=arr[0];
    for(i=1;i<n;i++){
        ll num=calc(temp,arr[i]);
        v.push_back(num);
        temp=num^arr[i];
    }
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
int main(){ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 
    
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif 
    
    ll t=1; 
    cin>>t;
    while(t--){ 
        solve(); 
        cout<<"\n";
    } 
    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
}    