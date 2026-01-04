#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s; cin>>s;
  int n = s.length();

  map<char,int> freq;
  for(char c:s){
    freq[c]++;
  }

  int oddFreq = 0;
  char odd = '1';
  for(auto &f:freq){
    if(f.second%2 != 0){
      oddFreq++;
      odd = f.first;
    }
  }
  if(oddFreq > 1) {
    cout<<"NO SOLUTION\n";
    return 0;
  }

  string firstPart = "";
  string midPart = "";

  for(auto &f:freq){
    if(f.second%2==0){
      string temp(f.second/2, f.first);
      firstPart += temp;
    }
    else{
      string temp(f.second, f.first);
      midPart += temp;
    }
  }
  string lastPart = firstPart;
  reverse(lastPart.begin(), lastPart.end());

  string final = firstPart+midPart+lastPart;
  cout<<final<<"\n";

  return 0;
}