#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int low, int mid, int high){

	int i = low, j = mid+1;
	vector<int>v;
	while(i <= mid && j <= high){
		if(arr[i] < arr[j]){
			v.push_back(arr[i]); i++;
		}
		else{
			v.push_back(arr[j]); j++;
		}
	}

	while(i<=mid){
		v.push_back(arr[i]); i++;
	}

	while(j<=high){
		v.push_back(arr[j]); j++;
	}
	j = 0;
	for(int k = low; k<=high; k++){
		arr[k] = v[j]; j++;
	}
}

void mergeSort(vector<int>&arr, int low, int high){
	if(low >= high) return ;


	int mid = (low + high)/2;

	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr,low, mid, high);
}

int main(){
	
	vector<int>arr = { 12, 11, 13, 5, 6 , 90};

	mergeSort(arr, 0, 5);
	for(int n: arr) cout<<n<<" ";
	return 0;

}