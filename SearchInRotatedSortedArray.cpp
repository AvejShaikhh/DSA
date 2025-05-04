#include<bits/stdc++.h>
using namespace std;

int findPosition(vector<int>& arr, int target){
    int low =0;
    int high = arr.size() -1;

    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        }

        // check left half is sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<arr[mid]){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        // check right half is sorted
        else{
            if(arr[mid] < target && target <= arr[high]){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {5,6,1,2,3,4};
    int target = 6;
    cout<<findPosition(arr,target);

    return 0;
}
