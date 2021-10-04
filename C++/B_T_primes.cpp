#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<bool> is_prime(N+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= N; i++) 
    {
        if (is_prime[i] && i * i <= N) {
            for (ll j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
    set<ll> st;
    for(ll i=2;i<=N;i++)
    {
        if(is_prime[i])
        st.insert(i*i);
    }
    while(n--)
    {
        ll x;
        cin>>x;
        if(st.find(x)!=st.end())
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
}