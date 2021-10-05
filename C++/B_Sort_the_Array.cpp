#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a,b;
    vector<int> ans;
    int j;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
        b.push_back(j);
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        ans.push_back(i);
    }
    if(ans.size()>=2)
    {
        int start=ans[0],end=ans.size()-1;
        end=ans[end];
        reverse(a.begin()+start,a.begin()+end+1);
        // for(auto i:a)
        // cout<<"H"<<i<<" ";
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"no\n";
        else
        {
            cout<<"yes\n";
            cout<<ans[0]+1<<" "<<ans[ans.size()-1]+1<<"\n";
        }    
    }
    else
    {
        cout<<"yes\n1 1\n";
    }
}