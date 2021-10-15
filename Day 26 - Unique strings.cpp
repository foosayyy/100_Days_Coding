#include<bits/stdc++.h>
using namespace std;

int main(){
  map<string, int> a;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    a[s]++;
  }
  for(auto pr : a){
    cout<< pr.first << " " << pr.second << endl;
  }
  return 0; 
}
