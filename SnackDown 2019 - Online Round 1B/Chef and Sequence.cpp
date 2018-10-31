#include <bits/stdc++.h>
using namespace std;
#define exit() return 0;
#define MX 1000000
int a[MX];
int main ()
{
    int T, N, K;
    cin>>T;
    for(int tc = 0; tc<T; tc++)
    {
        cin>>N>>K;
        int cntzero = 0;
        for(int i = 0; i<N; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            {
                cntzero++;
            }
        }
        K+=cntzero;
        if(K>=N)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
