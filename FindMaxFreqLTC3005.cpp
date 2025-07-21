#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>freqMap;
        int maxFreq = 0;
        for(int num: nums){
            freqMap[num]++;
            maxFreq = max(maxFreq, freqMap[num]);
        }
        int count = 0;
        for(const auto& pair: freqMap){
            if(pair.second == maxFreq){
                count = count + maxFreq;
            }
        }
        return count;
    }
};
int main(){
    Solution solution;
    vector<int>nums = {1,1, 2, 2, 3, 3};
    cout<<solution.maxFrequencyElements(nums)<<endl;
    return 0;
}
