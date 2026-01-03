#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  const int MOD = 1000000007;

  int n; cin>>n;
  long long ans = 1;
  while(n--){
    ans = (ans*2)%MOD;
  }

  cout<<ans<<"\n";

  return 0;
}