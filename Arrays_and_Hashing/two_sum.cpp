#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
bool two_sum(vector<int>&a,int n,int target)// 1st way(Using two loops),  TC-O(n^2)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        if((a[i]+a[j])==target)
        return true;
    }
    return false;
}
// bool two_sum(vector<int>&a,int n,int target)// 2nd way(using unordered_set), TC-O(n)
// {
//     unordered_set<int>s;
//     for(int i=0;i<n;i++)
//     {
//         if(s.find(target-a[i])==s.end())
//         s.insert(a[i]);
//         else
//         return true;
//     }
//     return false;
// }
main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    cin>>i;
    int target;
    cin>>target;
    cout<<two_sum(a,n,target);
}