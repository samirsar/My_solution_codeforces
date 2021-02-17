#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//int  t[1002][1002];
typedef pair<int,int>ii;
void solve()
{
    int n;
    cin>>n;
     vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count=0;
    int i=0;
    int t;
    while(1)
    {
    
        if(i==n-1)
        break;
        if(arr[i]>2*arr[i+1])
        {
            arr[i]=ceil(arr[i]/2.0);
        
            count++;
        }
        else
        {
            if(arr[i+1]>2*arr[i])
            {
               arr[i]=2*arr[i];
               count++;
            }
            else
            {
            
                i++;
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