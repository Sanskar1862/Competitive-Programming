#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int l=c/a;
        int m=d/b;
        int s=l+m;
        cout<<s<<endl;
    }
return 0;
}