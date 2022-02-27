#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int L;
        cin >> L;
        string S;
        cin >> S;
        int b = 0, c = 0;
        for (int i = 0; i < L; i++)
        {
            if (S[i] == '0')
                b++;
            else
                c++;
            if (c >= b)
                {cout << "yes" << endl;break;}            
        }
        if(b>c)
         cout << "no" << endl;
    }
    return 0;
}
