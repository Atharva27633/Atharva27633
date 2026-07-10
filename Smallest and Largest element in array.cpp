#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void smallestLargestElement(const vector <int>& nums) {
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int n = nums.size();

    for(int i=0; i<n; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }

        if(nums[i] > largest) {
            largest = nums[i];
        }
    }
    cout<<"Largest: "<<largest<<endl;
        cout<<"Smallest: "<<smallest<<endl;
    
    
};

int main() {
    vector<int> nums = {12,78,34,90,123};
    smallestLargestElement(nums);
    return 0;
}
