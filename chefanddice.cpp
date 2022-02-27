#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  T;
    cin>>T;
    while(T--)
    {
        long long N;
        cin>>N;
        long long  s=0;
        int c;
        int q;
        if(N>=4)
        {
            long long d=N/4;
            for(int i=1;i<=d;i++)
            s=s+44;
            c=4-(N%4);
            s=s+(c*4);
        }
        q=N%4;
        if(q==1)
        s=s+20;
        if(q==2)
        s=s+36;
        if(q==3)
        s=s+51;
        cout<<s<<"\n";
    }
    return 0;
}