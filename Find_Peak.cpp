#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int>& nums){
    int low = 0;
    int high = nums.size() - 1;
    int index = -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(mid == 0 || nums[mid] > nums[mid - 1]) {
            index = mid;
            low = mid + 1;
            }
            else {
                high = mid - 1;
                }
     }
      return index;
   }

    

int main(){
    vector<int> nums = {1,2,3,1};
    cout<<findPeak(nums);
    return 0;
}
