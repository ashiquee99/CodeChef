#include <bits/stdc++.h>
using namespace std;
#define exit() return 0;
#define MX 1000000
int a[MX];
int main ()
{
    int T, N;
    cin>>T;
    for(int tc = 0; tc<T; tc++)
    {
        cin>>N;
        if(N == 2010 || N == 2015 || N == 2016 || N == 2017 || N == 2019)
        {
            cout<<"HOSTED"<<endl;
        }
        else
        {
            cout<<"NOT HOSTED"<<endl;
        }
    }
    return 0;
}
