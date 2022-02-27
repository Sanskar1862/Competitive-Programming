#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin>>A;
    string p;
    while(A!=0||A!=1)
    {
        int d;
        d=A%2;
        if(d==0)
        p=p.append("0");
        else 
        p=p.append("1");
    }
    cout<<p;
    return 0;
}
