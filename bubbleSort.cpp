#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){

	int n = arr.size();

	for(int i=0;i<n;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

int main(){
	vector<int>arr = {10,5,12,8,6};

	bubbleSort(arr);
	for(int n: arr) cout<<n<<" ";
	return 0;
}