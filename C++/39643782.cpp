#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
#define mod 1000000007
#define booster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define pb push_back()
using namespace std;
int main() {
booster;
int T;
cin >> T;
for(int xy=1;xy<=T;xy++){
int n;
cin >> n;
int a[n];
int l=0,t=-1;
bool u=0,v=0,w=0,x=0,y=0,z=0;
vector<int>vect;
map<int,int>mp;

for(int i=0;i<n;i++){
cin >> a[i];
if(a[i]==1){
if(i==0){
l=1;
}
else if(i!=n-1){
l=INT_MAX;
t=i;
}
}
}
if(l==1){
int q;
cin >> q;
while(q--){
long long int r;
cin >> r;
int ans;
if(r%n==0){
ans= (r/n) % mod;
}
else{
if(r%n==1 && r>n ){
ans= (r/n) % mod;

}
else{
ans=(r/n+1) % mod;
}
}
cout << ans << endl;
}
}
else if(l==INT_MAX){
long long int sum=0,dp[100000]={};
for(int i=0;i<n-1;i++){
if(i==t-1){
if(a[i]%2==0){
sum=sum+a[i]-1;
dp[i]=sum;
u=1;
}
else{
sum+=a[i];
dp[i]=sum;
}
}
else{
if(a[i]%2==0){
sum+=a[i];
dp[i]=sum;
}
else{
sum+=a[i]-1;
dp[i]=sum;
}
}
}
if(a[n-1]%2==0){
sum+=a[n-1]-1;
}
else{
sum=sum+=a[n-1];
}
int q;
cin >> q;
while(q--){
long long int r;
cin >> r;
if(r%n==0){
if(a[n-1]%2==0){
cout << ((r/n)*sum+1) % mod;
}
else{
cout << ((r/n)*sum) % mod;
}
}
else{
if(t==r%n-1){
if(u==1){
cout << ((r/n)*sum+2+dp[r%n-1]) % mod;
}
else{
cout << ((r/n)*sum+dp[r%n-1]) % mod;
}
}
else if(t-1==r%n-1){
if(a[t-1]%2==0){
cout << ((r/n)*sum+dp[r%n-1]+1) % mod;
}
else{
cout << ((r/n)*sum+dp[r%n-1]) % mod;
}
}
else{
if(a[r%n-1]%2!=0){
cout << ((r/n)*sum+dp[r%n-1]+1) % mod;
}
else{
cout << ((r/n)*sum+dp[r%n-1]) % mod;
}
}
}
cout << endl;
}
}
else{
long long int sum=0,dp[100000]={};
for(int i=0;i<n-1;i++){
if(a[i]%2==0){
sum+=a[i];
dp[i]=sum;
}
else{
sum+=a[i]-1;
dp[i]=sum;
}
}
if(a[n-1]%2==0){
sum+=a[n-1]-1;
}
else{
sum=sum+=a[n-1];
}
int q;
cin >> q;
for(int xyz=1;xyz<=q;xyz++){
long long int r;
cin >> r;
if(r%n==0){
if(a[n-1]%2==0){
cout << ((r/n)*sum+1) % mod;
}
else{
cout << ((r/n)*sum) % mod;
}
}
else{
if(a[r%n-1]%2!=0){
cout << ((r/n)*sum+dp[r%n-1]+1) % mod;
}
else{
cout << (((r/n)*sum+dp[r%n-1]) % mod)+1-1;
}
}
cout << endl;
}
}
}
return 0;
}