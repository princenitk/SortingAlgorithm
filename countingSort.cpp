#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr){

    int maxi = INT_MIN;

    for(int n: arr) maxi = max(maxi, n);

    vector<int>count(maxi+1, 0), result(arr.size());

    for(int n: arr) count[n]++;
    
    for(int i = 1;i<arr.size();i++){
        count[i] += count[i-1];
    }   
   

    for(int i = arr.size()-1; i>=0; i--){
        result[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    return result;

}

int main(){

    vector<int> arr = {2,5,3,0,2,3,0,3};

    vector<int> res = countingSort(arr);

    for(int n: res) cout<<n<<" ";
    return 0;
}