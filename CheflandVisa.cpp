#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
    int x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    if(x1<=x2&&y1<=y2&&z1>=z2)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    }
return 0;
}