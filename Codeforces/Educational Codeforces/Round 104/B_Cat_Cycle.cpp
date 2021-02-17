#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
         ll n,k;
    cin>>n>>k;
    ll ans;
    if(n%2==0)
    {
       ans=(k-1)%n;
       cout<<ans+1<<endl;
    
    }
    else
    {
        ll d=n/2;
        ans=(k-1)%n;
        
        if(d!=0&&k>d)
        {
            ans=(ans+(k-1)/d)%n;
        }
        cout<<ans+1<<endl;
        
        
    }
    }
}