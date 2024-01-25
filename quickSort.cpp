#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high){


	int i = low - 1;
	int pivot = arr[high];

	for(int j = low; j < high; j++){

		if(arr[j] < pivot){
			i++; swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return i+1;

}


void quickSort(vector<int>&arr, int low, int high){

	if(low < high){
		int pivotIndex = partition(arr, low, high);
		quickSort(arr, low, pivotIndex-1);
		quickSort(arr, pivotIndex+1, high);
	}
	
}

int main(){
	
	vector<int>arr = { 12, 11, 13, 5, 6 , 90};

	quickSort(arr, 0, 4);
	for(int n: arr) cout<<n<<" ";
	return 0;

}