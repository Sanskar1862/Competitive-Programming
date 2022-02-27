#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
       int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int diff=abs(a-c)+abs(b-d);
    if((diff%2 == k%2) && diff<=k)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }   
    }
}
bool compare(int a, int b)
{
    return a > b;
}