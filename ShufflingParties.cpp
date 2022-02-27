#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int B[N];

        int s=0;
        for (int i = 0; i < N; i++)
        {
            B[i] = (A[i] + i+1) % 2;
            s=s+B[i];
        }
        cout<<s<<"\n";
    }
    return 0;
}