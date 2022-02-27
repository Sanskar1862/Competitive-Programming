#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string S;
        cin >> S;
        int c = 0;
        for (int j = 0; j < S.length(); j++)
        {
            if (S[j] == '1')
            {
                if (j == 0 && S[j] == '1')
                {
                    c++;
                }
                if (S[j - 1] == '0')
                    c++;
                if (S[j + 1] == '1')
                    continue;
            }
        }
        cout << c << endl;
    }
    return 0;
}

