#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    ll x;
    cin>>x;
    for(ll i=1;i*i*i<x;i++)
    {
        if(x-i*i*i>0)
        {
            if(pow(ll(cbrt(x-i*i*i)),3)==x-i*i*i)
            {
                
                cout<<"YES"<<endl;
                return ;
            }
        }
    }
    cout<<"NO"<<endl;
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
