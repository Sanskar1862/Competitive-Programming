#include <bits/stdc++.h>
using namespace std;
void testcase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int D, C;
        int A1, A2, A3;
        int b1, b2, b3;
        cin >> D >> C;
        cin >> A1 >> A2 >> A3;
        cin >> b1 >> b2 >> b3;
        int s, s1;
        s = A1 + A2 + A3;
        s1 = b1 + b2 + b3;
        int t1 = s + s1 + C;
        int t2 = s + s1 + D + D;
        if (s < 150)
            t1 += D;
        if (s1 < 150)
            t1 += D;
        if (t1 < t2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
int main()
{
    int a;
    cin >> a;
    testcase(a);
    return 0;
}