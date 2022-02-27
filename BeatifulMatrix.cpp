#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        cin>>A[i][j];
    }
    int k,l,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(A[i][j]==1)
            {
               k=abs(2-i);
               l=abs(2-j);
               c=k+l;
               cout<<c;
               return 0;
            }
        }
    }
}