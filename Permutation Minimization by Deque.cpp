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
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    deque<int> q;
    q.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]<q.front())
            q.push_front(arr[i]);
        else
            q.push_back(arr[i]);
            
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
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