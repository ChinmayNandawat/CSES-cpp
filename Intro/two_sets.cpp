#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  long long totalSum = 1LL*n*(n+1)/2;

  if(totalSum%2 != 0){
    cout<<"NO\n";
    return 0;
  }
  cout<<"YES\n";

  long long tgt = totalSum/2;

  //use greedy to find subseq with sum tgt
  vector<int> set1, set2;
  for(int i=n; i>=1; i--){
    if(i<=tgt){
      set1.push_back(i);
      tgt -= i;
    }
    else set2.push_back(i);
  }

  cout<<set1.size()<<"\n";
  for(int &x:set1) cout<<x<< " ";
  cout<<"\n";
  cout<<set2.size()<<"\n";
  for(int &x:set2) cout<<x<< " ";
  cout<<"\n";

  return 0;
}