#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
// bool anagram(string s1,string s2)// 1st way(Using Sorting and comparing),  TC-O(nlogn)
// {
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     if(s1==s2)
//     return true;
//     return false;
// }
bool anagram(string s1,string s2)// 2nd way(using hashing), TC-O(n)
{
    if(s1.size()!=s2.size())return false;
    int a[26]={0};
    for(int i=0;i<s1.size();i++)
    {
        a[s1[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++)
    {
        a[s2[i]-'a']--;
    }
    for(auto i:a)
    {
        if(i!=0)return false;
    }
    return true;
}
main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagram(s1,s2);
}