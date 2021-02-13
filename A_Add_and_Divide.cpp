#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
int max_size=10000;
void solve()
{
    int a,b;
    cin>>a>>b;
    if(b>a)
    {
        cout<<"1"<<endl;
        return ;
    }
    int o=b;
    int s=a;
    int ans=INT_MAX;
    int count=0;
    if(b==1)
    {
        b++;
        count++;
    }
    for(int i=1;i<=max_size;i++)
    {

        while(s)
        {
            s=s/b;
            count++;
            
        }
        ans=min(ans,count);
        b++;
        count=b-o;
        s=a;

        
    }
    cout<<ans<<endl;

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