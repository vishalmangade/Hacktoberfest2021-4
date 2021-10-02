// Deletions for making both strings equal

#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    int m=text1.size(), n=text2.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=n;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=dp[i-1][j-1];
            if(text1[i-1]==text2[j-1])
                dp[i][j]++;
            if(dp[i][j]<dp[i][j-1])
                dp[i][j]=dp[i][j-1];
            if(dp[i][j]<dp[i-1][j])
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[m][n];
}

int minDistance(string word1, string word2) {
    int ans=longestCommonSubsequence(word1,word2);
    return word1.length()+word2.length()-2*ans;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<minDistance(a,b)<<"\n";
}