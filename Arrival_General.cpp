#include<bits/stdc++.h>
using namespace std;

#define forn for(int i=0;i<n;i++)

int main()
{
    int n;
    cin>>n;
    int a[n];
    forn
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    forn{
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    int b=0;
    forn{
        for(int j=0;j<=i+1;j++)
        {
            if(a[i]>a[j])   
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                b++;
            }
        }
    }
    forn{
        cout<<a[i]<<"\n";
    }

    cout<<b;
}