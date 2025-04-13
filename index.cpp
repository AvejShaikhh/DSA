#include<iostream>
#include<vector>
using namespace std;

int findLeftBound(const vector<int>& nums, int target);
int findRightBound(const vector<int>& nums, int target);
vector<int> SearchRange(vector<int>& nums, int target);

vector<int> SearchRange(vector<int>& nums, int target) {
    int left = findLeftBound(nums, target);
    int right = findRightBound(nums, target);

    vector<int> ans = {left, right};
    return ans;
}

int findRightBound(const vector<int>& nums, int target) {
    int index = -1, low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            index = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}

int findLeftBound(const vector<int>& nums, int target) {
    int index = -1, low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            index = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return index;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = SearchRange(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}
