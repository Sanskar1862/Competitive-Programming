#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string A;
        cin >> A;
        string s="";
        int r = A.length();
        int k = (int)A[0];
        if (k > 49 && k <= 57)
        {
           s="1"+A;
        }
        if (k == 49)
        {
            A[0]='0';
            s="1"+A;
        }
        cout << s << endl;
    }
    return 0;
}