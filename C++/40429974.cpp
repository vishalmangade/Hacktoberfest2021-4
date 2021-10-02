#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define booster ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    booster;
    int t;
    cin>>t;
    while(t--){
             lli x,n;
             cin>>n>>x;
             lli arr[n+1];
            set<lli>bis;
            vector<lli>vec;
            for(lli i=0;i<n;i++) cin>>arr[i];
            lli oo=100000,pp=10000,nnn=32,mm=64;
            for(lli i=0;i<n;i++)   bis.insert(arr[i]);
            lli b[32]={0};
            lli i=0;

            while(x>0 && i<n-1){
                    if(arr[i]!=0){
                        lli bitpos;
                        bitpos=log2(arr[i]);
                        if(b[bitpos]==0){
                            b[bitpos]=1;
                            x--;
                        }
                        else{
                            b[bitpos]=0;
                        }
                        arr[i]=arr[i]^(lli)1<<bitpos;
                    }
                    else i++;
             }
             if(x>0){
                   if(n==2){
                       if(x%2!=0){
                           arr[n-1]=arr[n-1]^1;
                           arr[n-2]=arr[n-2]^1;

                       }
                   }
                   else{
                       if(x==1){
                           arr[n-1]=arr[n-1]^1;
                           arr[n-2]=arr[n-2]^1;
                       }
                   }
             }
             else{
                 for(lli jj=i;jj<n-1;jj++){
                     for(lli ii=31;ii>=0;ii--){
                         if(b[ii]==1){
                             lli z=arr[jj]^(lli)1<<ii;
                             if(arr[jj]>z){
                                 arr[jj]=z;
                                 b[ii]=0;
                             }
                         }
                     }
                 }
             }

             for(lli zz=31;zz>=0;zz--){
                 if(b[zz]==1){
                     arr[n-1]=arr[n-1]^(lli)1<<zz;
                 }
             }

             for(lli kk=0;kk<n;kk++){
                 cout<<arr[kk]<<" ";
             }
             cout<<endl;    
             }
    return(0);
}