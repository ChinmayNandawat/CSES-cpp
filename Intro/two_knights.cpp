#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n; cin>>n;
  long long k = 1;
  while(k<=n){
    long long total = k*k*(k*k - 1)/2; 
    long long notPos = 0;

    //each 3x2 and 2x3 rect contains 2 notPos, 
    //and because it is square both rec number are same
    if(k>=3) notPos = 4 * (k-1)*(k-2);

    cout<<total-notPos<<"\n";
    k++;
  }

  return 0;
}