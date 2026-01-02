#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  if(n == 1) {
    cout<<"1\n";
  }
  else if(n<4) {
    cout<<"NO SOLUTION\n"; 
  }
  else{
    vector<int> ans;
    int even = 2;
    int odd = 1;
  
    while(even <= n){
      ans.push_back(even);
      even += 2;
    }
    while(odd <= n){
      ans.push_back(odd);
      odd += 2;
    }
  
    for(int x:ans){
      cout<<x<<" ";
    }
  }
  return 0;
}