#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, H, x;
    cin >> N >> H >> x;
    int T[N];
    int c = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> T[i];
    }
    for (int k = 1; k <= N; k++)
    {
        int s = 0;
        s = T[k] + x;
        if (s >= H)
        {
            c++;
            break;
        }
    }
    if (c > 0)
        cout << "Yes";
    else
        cout << "no";
}