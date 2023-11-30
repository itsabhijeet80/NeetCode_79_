#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
vector<vector<string>> group_anagrams(vector<string>&a,int n)// 1st way(Using two loops),  TC-O(n^2)
{
    sort(a.begin(),a.end());
    unordered_map<string,vector<string>>m;
    vector<vector<string>>v;
    for(int i=0;i<n;i++)
    {
        string temp=a[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(a[i]);
    }
    for(auto i:m)
    {
        v.push_back(i.second);
    }
    return v;
}
main()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(auto &i:a)
    cin>>i;
    vector<vector<string>>ans=group_anagrams(a,n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}