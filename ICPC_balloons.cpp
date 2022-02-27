#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff for (int i = 0; i < N; i++)

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        ff
        {
            cin >> A[i];
        }
        int c = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if (A[i] == 1 || A[i] == 2 || A[i] == 3 || A[i] == 4 || A[i] == 5 || A[i] == 6 || A[i] == 7)
            {
                c = i;
                break;
            }
        }
        cout << c + 1 << endl;
    }
    return 0;
}