#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
ll sod(string p)
{
    int sum=0;
    for(int i=0;i<p.length();i++)
    {
        sum+=p[i]-48;
    }
    return sum;
}

void solve()
{
    ll n;
    cin>>n;
    ll m=INT_MAX;
    for(ll i=1;i<=90;i++)
    {
        ll d=sqrt(i*i+4*n);
        if(d*d==(i*i+4*n))
        {
            if(d>=i)
            {
               if((d-i)%2==0)
               {
                   ll p=(d-i)/2;
                   if(i==sod(to_string(p)))
                   m=min(m,p);
                
               }
            }
            

        }
    }
    if(m==INT_MAX)
    cout<<"-1"<<endl;
    else
    cout<<m<<endl;
}
int main()
{

        solve();
    
}