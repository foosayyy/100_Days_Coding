#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a;
    int arr;
    cin>>arr;
    for(int i=0; i<arr; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int erase;
    cin>>erase;
    a.erase(a.begin()+(erase-1));
    
    int start,end;
    cin>>start>>end;
    a.erase(a.begin()+(start-1),a.begin()+(end-1));
    
    cout<<a.size()<<endl;
    for(int j=0; j<a.size(); j++){
        cout<<a[j]<<" ";
    }  
    return 0;
}
