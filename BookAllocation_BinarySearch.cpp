#include<bits/stdc++.h>
using namespace std;

bool AllocationisPossible(int barrier, vector<int>&arr, int n, int k){
    int alloatedStu = 1;
    int pages = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > barrier) return false;
        
        if(pages + arr[i] > barrier){
            alloatedStu += 1;
            pages = arr[i];
        }
        else{
            pages += arr[i];
        }
    }
    if(alloatedStu > k){
        return false;
    }
    else{
        return true;
    }
}

int minPages(vector<int>&arr,int n,int k){
    int low = *min_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(), 0);
    int res = -1;

    while(low <= high){
        int mid = (low+high)>>1;
        if(AllocationisPossible(mid,arr,n,k)){
            res = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return res;
}
int main(){

    vector<int> arr = {12,34,67,90};
    int n = arr.size();
    int k = 2; //no of students

    cout<<minPages(arr,n,k);
}
