#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
         int X,Y;
        cin>>X>>Y;
        char a[N][M];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            cin>>a[i][j];
        }
        for(int i=0;i<N;i++)
        {
            int c=0,d=0;
            for(int j=0;j<M;j++)
            {
                if(a[i][j]=='F')
                c++;
                else if(a[i][j]=='P')
                d++;
            }
            if(c>=X)
            cout<<"1";
           else if(c>=X-1&&d>=Y)
            cout<<"1"; 
            else
            cout<<"0";
        }
        cout<<endl;
    }
    return 0;
}