#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[] = {12, 6, 8, 2, 10};
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i = 1; i<n; i++){
        int key = arr[i], j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = key;
    }

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}