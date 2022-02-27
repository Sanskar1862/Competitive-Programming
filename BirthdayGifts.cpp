#include<bits/stdc++.h>
using namespace std;
#define int long long

bool compare(int a, int b)
{
    return a > b;
}

int32_t main()
{
    int T;
    cin>>T;
    while(T--)
    {
          int N, K;
        cin >> N >> K;
        // vector<int> A(N);
        int s1 = 0, s2 = 0, s3 = 0;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        // sort(A.begin(), A.end(), compare);
         sort(A, A+N, compare);
        for (int i = 0; i < 2 * K ; i++)
        {
            // i%2==0?s1+=A[i]:s2+=A[i];
            if (i % 2 == 0)
                s1 += A[i];
            else
                s2 += A[i];
        }
        // s3 = A[2 * K] + A[(2 * K) - 1];
        s2+=A[2*K];
        if (s1 >= (s2 ))
        {
            cout << s1 << endl;
        }
        else
            cout << s2  << endl;
    }
    return 0;
}