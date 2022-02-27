#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int D,d,A,B,C;
        cin>>D>>d>>A>>B>>C;
        if((D*d)>=42)
        cout<<C<<"\n";
        else if((D*d)>=21)
        cout<<B<<"\n";
        else if((D*d)>=10)
        cout<<A<<"\n";
        else
        cout<<"0"<<"\n";
    }
    return 0;
}