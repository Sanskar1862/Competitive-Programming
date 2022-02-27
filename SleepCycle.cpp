#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
          int L,H;
          cin>>L>>H;
          char s[L];
          for(int i=0;i<L;i++)
          cin>>s[i];
          int t;
        for(int j=0;j<L;j++)
        {
            if(s[j]=='0'&&s[j+1]!='1')
            t++;
            else
            {
                t=t+1;
                break;
            }
        }
        if(t>L)
            {
                cout<<"YES";
                break;
            }
            else{
                
            }
    }
return 0;
}