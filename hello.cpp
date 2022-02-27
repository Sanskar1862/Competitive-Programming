#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        int s=0;
        int c;
        if (N % 2050 == 0)
        {
         /*   while (N > 0)
            {
                s++;
                long long d = N;
                long long q=0;
                while (d > 0)
                {
                    q++;
                    d /= 10;
                }
                long long l=q-4;
                N -= (2050 * pow(10, (l)));
            }     */
            int c=N/2050;
            while(c!=0)
            {
                int r=c%10;
                s=s+r;
                c/=10;
            }
            cout << s <<endl;
        }
        else
            cout << "-1"<<endl;
    }
    return 0;
}