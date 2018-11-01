#include <bits/stdc++.h>
using namespace std;
#define MX 1000006
int a[MX];
int main ()
{
  int T, N, M, K, L;
  cin>>T;
  while(T--)
  {
      cin>>N>>M>>K>>L;
      for(int i = 0; i<N; i++)
      {
          cin>>a[i];
      }
      a[N] = K;
      sort(a, a + (N+1));
      int mn = (M*L) + L;
      for(int i = 0; i<N+1; i++)
      {

          M++;
          if(a[i]<=K){
          mn = min(mn, abs((M*L) - a[i]));
          }
      }
      cout<<mn<<endl;
  }
  return 0;
}
