#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> &nums)
{
    // firstly Calculating Total Sum i.e. right sum
    int rightSum = 0;
    for (int num : nums)
    {
        rightSum = rightSum + num;
    }
    int leftSum = 0;
    // iterate through the array
    for (int i = 0; i < nums.size(); i++)
    {
        // Update the RightSum
        rightSum = rightSum - nums[i];

        // Checks the leftSum == rightSum
        if (leftSum == rightSum)
        {
            return i;
        }
        // Update the leftSum
        leftSum = leftSum + nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 1, -1};
    cout << findPivot(nums) << endl;
    return 0;
}
