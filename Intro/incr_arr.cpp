#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  int max = INT_MIN;

  long long ans = 0;
  for(int i=0;i<n;i++){
    int num; cin>>num;
    if(max < num) max = num;
    else ans += max-num;
  }

  cout<<ans;
  
  return 0;
}