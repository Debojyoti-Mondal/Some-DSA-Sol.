#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    // create a nested loop for pair elements of array 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Corrected this line
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = PairSum(nums, target);
    if (!ans.empty()) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}
