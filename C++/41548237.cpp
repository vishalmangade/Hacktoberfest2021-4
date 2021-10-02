#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ub upper_bound
#define lb lower_bound
#define m_p make_pair
#define mapll map<lli,lli>
#define mapt  map<int int>
#define vecll vector<lli>
#define vectt vector<int>
#define pairll pair<lli,lli>
#define pairtt pair<int,int>
#define pb push_back
#define pob pop_back
#define boost ios_base::sync_with_stdio(false);
#define boostI  cin.tie(NULL);
#define boostO  cout.tie(NULL);
#define stll  set<lli>
#define sttt  set<int>
#define stal  stack<lli>
#define sp    push
#define spo   pop()
#define uuss  unordered_set<lli>
#define umlb  unordered_map<lli,bool>
#define traverse(z) z.begin(),z.end()  
#define testcase(t) int t; cin>>t; 
#define exp 1e18
#define fr(x,y) for(lli i=x;i<=y-1;i++)
#define fill(a,z)   memset(a,z,sizeof(a))
bool run=true;
lli M=998244353;
lli N=500005;

/*   codechef january challenge div 2
     problem : EXPECTED NUMBER OF SCC's
     problem code: RCTEXSCC
     user: SIDDHUCODES
      institute : KNIT SULTANPUR*/
lli powerLLi(lli x, lli n) 
{ 
    lli result = 1; 
    while (n) { 
        if (n&1) 
            result=result*x%M; 
        n = n/2; 
        x = x * x % M; 
    } 
    return result; 
} 
lli input(){
    lli in;
    cin>>in;
    return in;
}
lli mod(lli result){
    result=result%M;
    return(result);
}
void output(lli pr){
    cout<<pr<<endl;
}
int main(){
    boost;
    boostI;
    boostO;
   // testcase(t);
    uuss st;
     lli m,n,k;
    umlb mp;
    mapll mp2;
    m=input();
    n=input();
    k=input();
    lli ans;
    lli dp[n][2];
    fill(dp,0);
    dp[0][0]=k;
    lli t[n+1];
    fill(t,0);
    t[1]=k;
    vecll anz;
    if(m==2){
        ans=powerLLi(k,2*n);
        ans=powerLLi(ans,M-2);\
        anz.pb(ans);
        if(k==1 && run) output(ans);
         else{
               dp[0][1]=((k-1)*k*2)%M;
               mp[dp[0][1]]++;
               fr(1,n){             
                   //filling dp
       dp[i][0] += ((k-1)*(dp[i-1][0]+(k*powerLLi(k,2*(i-1))) %M) % M) %M;
       dp[i][0] %= M;
       dp[i][0] += dp[i-1][0]; 
       dp[i][0] %=M;
       dp[i][0] += (2LL*dp[i-1][1])%M; 
       dp[i][0] %=M;
       dp[i][0] +=((k-2)*(dp[i-1][1]+(((k*(k-1)) % M)*powerLLi(k,2*(i-1)))%M)%M) %M; 
       dp[i][0] %= M;
       anz.pb(dp[i][0]);
         
       dp[i][1] +=((k-1)*(dp[i-1][0]+(k*powerLLi(k,2*(i-1)))% M) % M) % M; 
       dp[i][1] %=M;
       dp[i][1] +=((k-1)*(dp[i-1][0]+(k*powerLLi(k,2*(i-1))) % M)%M)% M; 
       dp[i][1] %=M; 
       dp[i][1] +=((((k-2)*(k-1))%M)*(dp[i-1][0]+(2*k*powerLLi(k,2*(i-1))) %M) %M) %M; 
       dp[i][1] %=M;;
       anz.pb(dp[i][1]); 

       dp[i][1] +=dp[i-1][1]; 
       dp[i][1] %=M;
       dp[i][1] +=((((k-2))%M)*(dp[i-1][1]+(((k*(k-1))%M)*powerLLi(k,2*(i - 1))) %M) %M) % M; 
       dp[i][1] %=M;
       dp[i][1] +=((((k-2))%M)*(dp[i-1][1]+(((k*(k-1))% M) * powerLLi(k,2*(i-1))) %M) %M) %M; 
       dp[i][1] %=M;
       dp[i][1] +=((((k-2))%M)*(dp[i- 1][1]+((2*(k*(k-1))%M)*powerLLi(k,2*(i-1))) %M) %M) % M; 
       dp[i][1] %=M;
       dp[i][1] +=((((k-1)) % M)*(dp[i-1][1] + ((2*(k*(k-1)) %M)*powerLLi(k,2*(i-1)))% M) %M) %M; 
       dp[i][1] %=M;
       dp[i][1] +=((((k-2)*(max(k-3,0LL)))%M)*(dp[i-1][1]+((2*(k*(k-1))% M)* powerLLi(k,2*(i-1)))%M)% M) % M; 
       dp[i][1] %= M;
       anz.pb(dp[i][1]);
               }
               lli ans2=dp[n-1][0]+dp[n-1][1];
               ans2=mod(ans2);
               ans2=ans2*ans;
               ans2=mod(ans2);
               anz.pb(ans2);
               output(ans2);
         }
         }
         else{
              fr(2,n+1){
                t[i]=t[i]+t[i-1]; 
                t[i]=t[i]%M;
                t[i]=t[i]+((k-1)*(t[i-1] +(powerLLi(k,i-1)))) %M;
                t[i]=t[i]%M;
                anz.pb(t[i]);
             }
           lli res = powerLLi(k,n);
           res= powerLLi(res,M-2);
           res=(t[n]*res) % M;
           anz.pb(res);
           lli sz=anz.size();
           sort(traverse(anz));
           output(res);
           
         }
    
}