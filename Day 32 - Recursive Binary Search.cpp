/*
NAME - KRISHANU RAI
SECTION - SE
RECURSIVE BINARY SEARCH
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

int BinarySearchRecursive(vector<int> a, int l, int r, int key){
	while(l<=r){
		int mid = l + ( r - l ) / 2;
		if(a[mid] == key ){
			return mid;
		}

		if(a[mid]< key){
			return BinarySearchRecursive(a, mid+1, a.size()-1, key);
		}
		else{
			return BinarySearchRecursive(a, a[0], mid+1, key);

		}
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
	int result = BinarySearchRecursive(a, a[0], a.size(), key);
	if( result == -1){
		cout << "Not Present";
	}	
	else
		cout<< " Present "<< result;


	return 0;
}
