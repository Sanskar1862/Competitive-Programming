#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        long long A,B;
        cin>>N;
        cin>>A>>B;
        long long q=0,l=0;
        string S;
        for(int i=1;i<=N;i++)
        {
            cin>>S;
            if(S[0]=='E'||S[0]=='Q'||S[0]=='U'||S[0]=='N'||S[0]=='O'||S[0]=='X'||S[0]=='I')
            q=q+A;
            else
            l=l+B;
        }
        if(q>l)
        cout<<"SARTHAK"<<endl;
        else if(l>q)
        cout<<"ANURADHA"<<endl;
        else
        cout<<"DRAW"<<endl;
    }
    return 0;
}