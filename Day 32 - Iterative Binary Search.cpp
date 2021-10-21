/*
NAME - KRISHANU RAI
SECTION - SE
ITERATIVE BINARY SEARCH
******************************************
INPUT 
5
2 3 4 10 40
10
******************************************
OUTPUT
Present 3
******************************************
*/
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> a, int l, int r,int key){
	while(l<=r){
		int mid = l + (r-l)/2;

		if(a[mid]==key){
			return mid;
		}
		if(mid<key){
			l=mid+1;
		}
		else
			r=mid-1;
	}

	return -1;
}

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int key;
	cin>>key;
	int result = BinarySearch(a, 0,a.size()-1, key);
	if(result == -1){
		cout<< "Not Present"<<endl;
	}
	else
		cout<<"Present "<< result;

	return 0;
}
