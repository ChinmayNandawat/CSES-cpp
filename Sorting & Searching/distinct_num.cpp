#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  set<int> set;
  while(n--){
    int num; cin>>num;
    set.insert(num);
  }

  cout<<set.size()<<"\n";
  return 0;
}