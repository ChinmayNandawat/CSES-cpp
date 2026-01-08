#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  //MultiSet - > https://www.geeksforgeeks.org/cpp/multiset-in-cpp-stl/
  
  int n,m; cin>>n>>m;
  multiset<int> tickets;
  for(int i=0;i<n;i++){
    int x; cin>>x;
    tickets.insert(x);
  }

  while(m--){
    int maxPrice; cin>>maxPrice;

    auto it = tickets.upper_bound(maxPrice);
    if(it == tickets.begin()) cout<<-1<<"\n";
    else{
      it--;
      cout<<*it<<"\n";
      tickets.erase(it);
    }
  }

  return 0;
}