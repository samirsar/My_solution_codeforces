#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll ans=0;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {

            ans+=arr[i-1]-arr[i];
        }
    
    }
    cout<<ans<<endl;

}
int main()
{

        solve();
        return 0;
    
}