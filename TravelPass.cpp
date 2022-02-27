#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
          int A,B,N;
        //   char s[n];
          cin>>N>>A>>B;
          string s;
          cin>>s;
          int c=0,d=0;
          for(int i=0;i<N;i++)
          {
              if(s[i]=='0')
              c++;
              if(s[i]=='1')
              d++;
          }
          cout<<((A*c)+(B*d))<<"\n";
        // cout<<c<<d<<"\n";
    }
return 0;
}