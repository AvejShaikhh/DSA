class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size()-1;
        int left = 0;
        int right = n;
        
        while(left<right){
            if(numbers[left] + numbers[right] > target){
                right--;
            }
            if(numbers[left] + numbers[right] < target){
                left++;
            }
            if(numbers[left] + numbers[right] == target){
                return vector<int> ({left+1, right+1});
            }
        }
        return vector<int>({});
    }
};
