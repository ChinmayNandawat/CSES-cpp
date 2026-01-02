#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin>>t;
  while(t--){
    long long r,c; cin>>r>>c;

    long long m = max(r,c);
    long long ans = 0;
    if(m%2 == 0){
      if(r==m) ans = m*m - (c-1);
      else ans = (m-1)*(m-1) + r;
    }
    else{
      if(c==m) ans = m*m - (r-1);
      else ans = (m-1)*(m-1) + c;
    }

    cout<<ans<<"\n";
  }

  return 0;
}