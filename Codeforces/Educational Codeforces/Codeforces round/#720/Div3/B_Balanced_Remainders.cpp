#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    int n;
    cin>>n;
    int arr[3]={0};
    for(int i=1;i<=n;i++)
    {
       int t;
       cin>>t;
       arr[t%3]++;
    }
    
    int count=0;
    for(int j=0;j<2;j++)
    {
        for(int i=0;i<3;i++)
        {
            if(arr[i]>n/3)
            {
                count+=arr[i]-n/3;
                arr[(i+1)%3]+=arr[i]-n/3;
                arr[i]=n/3;
            }
        }
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