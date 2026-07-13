#include<iostream>
#include<vector>
#include<climits>

using namespace std;


int main() {
    int currSum = 0;
     int maxSum = INT_MIN;

    vector<int> nums = {5,4,-1,7,8};

     for(int num : nums) {
        currSum += num;
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;

    return 0;
}
