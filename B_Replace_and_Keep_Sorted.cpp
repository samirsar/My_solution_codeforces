#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum[n]={0};
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            sum[i]=arr[i+1]-2;

        }
        if(i==n-1)
        sum[i]=k-arr[i-1]-1+sum[i-1];
        else
        sum[i]=arr[i+1]-2-arr[i-1]+sum[i-1];
    }
    // for(int i=0;i<n;i++)
    // cout<<sum[i]<<" ";
    // cout<<endl;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==r)
        cout<<k-1<<endl;
        else
        {
            cout<<arr[l]-2+k-arr[r-2]-1+sum[r-2]-sum[l-1]<<endl;
        }
        
    }
}
int main()
{
    
      solve();

}