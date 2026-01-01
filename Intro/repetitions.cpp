#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin>>s;
  int rep = 1;
  int maxRep = 1;

  for(int i=0;i<s.length()-1;i++){
    if(s[i] == s[i+1]) rep++;
    else rep=1;

    maxRep = max(maxRep, rep);
  }
  cout<<maxRep;

  return 0;
}