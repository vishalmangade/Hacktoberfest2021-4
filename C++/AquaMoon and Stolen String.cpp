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
    ll n,m;
    cin>>n>>m;
    vector<string> v,v1;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(ll i=0;i<n-1;i++){
        string s;
        cin>>s;
        v1.push_back(s);
    }
    string str="";
    // for(int i=0;i<26;i++)
    //     cout<<arr[i]<<" ";
    ll k=0;
    for(int i=0;i<m;i++){
        int arr[26]={0};
        for(ll j=0;j<n-1;j++){
            arr[v1[j][i]-'a']++;
        }
        for(ll j=0;j<n;j++){
            if(arr[v[j][i]-'a']>0){
                arr[v[j][i]-'a']--;
            }
            else{
                k=1;
                str+=v[j][i];
                break;
                
            }
        }
    }
    cout<<str;
    fflush(stdout);
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