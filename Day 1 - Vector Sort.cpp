#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortVec(vector<int>a){
    sort(a.begin(),a.end());
    for( auto x:a)
    cout<<x<<" ";

}

int main() {
    int size=0;
    vector<int> a;
    cin >> size;
    for(int i=0; i<size;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sortVec(a);
     
      
     return 0;
}
