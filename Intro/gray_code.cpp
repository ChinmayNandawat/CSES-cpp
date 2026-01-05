#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin>>n;
  //Gray(i) = i ^ (i >> 1)
  //https://www.geeksforgeeks.org/competitive-programming/cses-solutions-gray-code/
  int limit = 1 << n; //i.e 2^n
  for(int i=0; i<limit; i++){
    int gray = i^(i>>1);

    //print n-bit binary
    for(int bit = n-1; bit>=0; bit--){
      cout<<((gray>>bit)&1);
    }
    cout<<"\n";
  }


  return 0;
}