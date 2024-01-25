#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr){

	int n = arr.size();

	for(int i=0;i<n-1;i++){
		int idx = i;
		for(int j = i+1;j<n;j++){
			if(arr[idx] > arr[j]){
				idx = j;
			}
		}
		if(idx != i)
			swap(arr[i], arr[idx]);
	}
}

int main(){
	vector<int>arr = {10,5,12,8,6};

	selectionSort(arr);
	for(int n: arr) cout<<n<<" ";
	return 0;
}