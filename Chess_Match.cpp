#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
          int N,A,B;
          cin>>N>>A>>B;
          int r=2*(180+N);
          int t=A+B;
          int d=r-t;
          cout<<d<<endl;
    }
return 0;
}