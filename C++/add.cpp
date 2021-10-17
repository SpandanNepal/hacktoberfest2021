#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
#define int long long

using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return(a/gcd(a,b))*b;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    int sum=0;
  sum=a+b;
    cout<<sum;
}
