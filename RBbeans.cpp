#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int r, b, d;
        cin >> r >> b >> d;
        int c = min(r, b);
        int l = max(r, b);
        bool f = false;
        if (r == 1 && b == 1)
            f = true;
            int q=l/c;
            while(c>=1)
            {
                if(abs(q-c)<=d) //hello my name is kumar sanskar
                f=true;
                else
                f=false;
                c--;
                q=
            }
                
    if (f == true)
        cout << "yes"<<endl;
    else
        cout << "no"<<endl;
}
}