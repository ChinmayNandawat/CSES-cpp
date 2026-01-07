#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,m,k; cin>>n>>m>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  vector<int> b(m);
  for(int i=0;i<m;i++) cin>>b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int i = 0;
  int j = 0;

  int match = 0;

  while(i<n && j<m){
    int diff = abs(b[j] - a[i]);
    if(diff<=k){
      i++;j++;
      match++;
    }
    else if(a[i] > b[j]) j++;
    else i++;
  }

  cout<<match<<"\n";

  return 0;
}