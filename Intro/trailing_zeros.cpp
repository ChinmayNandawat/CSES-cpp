#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  long long cnt5 = 0;

  for(long long p=5; p<=n; p*=5){
    cnt5 += n/p;
  }

  cout<<cnt5<<"\n";
  return 0;
}