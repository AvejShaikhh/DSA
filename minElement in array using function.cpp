#include<bits/stdc++.h>
using namespace std;



 int findMin(vector<int>& nums) {
        auto yes = min_element(nums.begin(),nums.end());
        int n=*yes;
        return n;
    }
    int main(){
    vector<int> nums = {50,20,22,23,27};
    cout<<findMin(nums);

    return 0;
}
