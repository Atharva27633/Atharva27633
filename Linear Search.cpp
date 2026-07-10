#include<iostream>
#include<vector>

using namespace std;

int linearTargetSearch(vector<int>& nums, int target) {
    int n = nums.size();

    for(int i=0; i<n; i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
};

int main() {
    vector<int> nums = {23,56,78,24,90};
    int target = 78;
    int result = linearTargetSearch(nums, target);
    if(result != -1) {
        cout<<"Element found at index: "<<result<<endl;
    } else {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
