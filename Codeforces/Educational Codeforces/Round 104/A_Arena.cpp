#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    ll count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[0]!=arr[i])
        count++;
    }
    cout<<count<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}