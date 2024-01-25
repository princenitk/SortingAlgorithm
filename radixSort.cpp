#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr, int exp){
    
    int count[10] = {0}, n = arr.size();
    vector<int>output(n);

    for(int n: arr) count[(n/exp)%10]++;

    for(int i = 1; i<10;i++){
        count[i] += count[i-1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) arr[i] = output[i];

}


void radixSort(vector<int>&arr){

    int maxi = INT_MIN;
    for(int n: arr) maxi = max(maxi, n);

    for(int exp = 1; maxi/exp > 0; exp *= 10){
        countingSort(arr, exp);
    }

}

int main(){

    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    radixSort(arr);

    for(int n: arr) cout<<n<<" ";
    return 0;
}