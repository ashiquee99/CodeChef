#include <bits/stdc++.h>
using namespace std;
#define                MX 1000006
#define                FAST_IO ios_base::sync_with_stdio(false),cin.tie(NULL)
#define                exit() return 0;

int a[MX];
int main ()
{
    FAST_IO;
    int T, N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        set <int> st1, st2;
        set <int> ::iterator it;
        for(int i = 1; i<=N; i++)
        {
            cin>>a[i];
            st1.insert(a[i]);
        }
        bool flag = false;
        for(it = st1.begin(); it!=st1.end(); it++)
        {
            st2.insert(a[*it]);
        }
        if(st2.size()!=st1.size())
        {
            flag = true;
        }
        if(flag)
        {
            cout<<"Truly Happy"<<endl;
        }
        else
        {
            cout<<"Poor Chef"<<endl;
        }
    }
    return 0;
}
