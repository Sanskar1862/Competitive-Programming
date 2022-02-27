#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,A,B;
        cin>>X>>A>>B;
        int d= A+((100-X)*B);
        cout<<d*10<<endl;
    }
    return 0;
}