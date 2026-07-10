#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int>& nums, int n) {
    int start = 0;
    int end = n - 1;

    while(start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
};

int main() {
    vector<int> nums = {2,5,8,23,78};
    int n = nums.size();
    reverseArray(nums, n);
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
        
    }
    cout<<endl;
    return 0;
}
