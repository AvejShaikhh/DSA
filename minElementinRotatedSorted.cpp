#include<bits/stdc++.h>
using namespace std;

//find minimum element in rotated sorted array using binary search
int minElement(vector<int>&nums){
    int left = 0;
    int right = nums.size()-1;
   
    while(left < right){
        int mid = left + (right - left)/2;
        if(nums[mid] > nums[right]){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return nums[left];
}
int main(){
    vector<int> nums = {50,20,22,23,27};
    cout<<minElement(nums);

    return 0;
}
