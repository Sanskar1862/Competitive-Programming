#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
          int a,b,c,d,e;
          cin>>a>>b>>c>>d>>e;
          int t,t1,t2,t3;
          t=a+b+c;
          t1=a+b;
          t2=a+c;
          t3=b+c;
          if(t1<=d&&(c<=e)){
               cout<<"Yes\n";
          }
          else if(t2<=d&&(b<=e))
          cout<<"Yes\n";
          else if(t3<=d&&(a<=e))
          cout<<"Yes\n";
          else
          cout<<"No\n";
    }
return 0;
}