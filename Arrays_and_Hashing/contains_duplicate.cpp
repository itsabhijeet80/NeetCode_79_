#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
// bool duplicate(vector<int>&a,int n)// 1st way(Using Sorting and Xor),  TC-O(nlogn)
// {
//     sort(a.begin(),a.end());
//     for(int i=0;i<n-1;i++)
//     {
//         if(!(a[i]^a[i+1]))
//         return true;
//     }
//     return false;
// }
bool duplicate(vector<int>&a,int n)// 2nd way(using unordered_set), TC-O(n)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])==s.end())
        s.insert(a[i]);
        else
        return true;
    }
    return false;
}
main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    cin>>i;
    cout<<duplicate(a,n);
}