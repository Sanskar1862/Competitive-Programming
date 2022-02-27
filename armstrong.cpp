#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    for(int i=1;i<=2000;i++)
    {
        int k=i;int l=i;
        int n=0;int s=0;int rn;
        while(l!=0)
        {
            n++;
            l/=10;
        }
        while(k!=0)
        {
            rn=k%10;
            s=s+(pow(rn,n));
            k/=10;
        }
        if(s==i)
        cout<<i<<endl;
    }
}