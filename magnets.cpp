#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    // int T;
    // cin>>T;
    // while(T--)
    // {
          
    // }
    int n;
    cin>>n;
    int g=0;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int j=0;j<n;j++)
    {
        if(c[j]==10&&c[j+1]==01)
        g++;
        if(c[j+1]==10&&c[j]==01)
        g++;
    }
    cout<<g+1;
return 0;
}