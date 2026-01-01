#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  long long expSum = 1LL*n*(n+1)/2; //use 1ll when multiplying if 10^5 or more
  for(int i=1;i<=n-1;i++){
    int num; cin>>num;
    expSum -= num;
  }

  cout<<expSum;
  return 0;
}